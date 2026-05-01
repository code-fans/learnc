/*
 *  _____         _           
 * |_   _|___ _ _| |_ ___ _ _ 
 *   | | | . | | | . | . |_'_|
 *   |_| |___|_  |___|___|_,_|
 *           |___|            
 * 
 * 
 *
 * C/C++ 初学者的第一个游戏 & 动画引擎
 *
 * MIT License
 * 
 * Copyright (c) 2024 by Yanyan Jiang and Zesen Liu
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * toybox 的核心只有一个入口函数：void toybox_run(fps, update, keypress)
 * 它的任务很单纯：一直帮你管理“输入、更新、输出”这三件事。
 * 你写的程序只要提供 update() 和 keypress()，toybox 就会负责把它们串起来。
 *
 * 设计思路可以理解成三步：
 * 1. 先收集键盘输入；
 * 2. 再调用 update() 让你“重新画一帧”；
 * 3. 最后把这一帧一次性显示到屏幕上。
 *
 * 这样做的好处是：游戏逻辑和画面输出分开，代码更容易写。
 *
 * 以后可以改进的地方：
 * - 支持按键按住不放时的连续输入；
 * - 支持彩色字符或真正的像素图；
 * - 让画布自动扩展，而不是固定在 MAX_W_ / MAX_H_；
 * - 把输入、更新、渲染拆成更清楚的模块。
 *
 * - 1. 整数 fps:
 *       每秒刷新的次数，也就是每秒执行多少次 update()
 *       这个数字越大，画面更新越快，但也更吃性能。
 *
 * - 2. 函数 update:
 *       void update(int w, int h, draw_function draw);
 *       每当该刷新一帧时，toybox 就会调用它。
 *       你可以把它理解成“每帧都要执行的游戏脚本”。
 *       常见做法是：先计算角色位置、分数、敌人移动等逻辑，再把结果画出来。
 *       然后通过 draw(x, y, ch) 画出这一帧的内容。
 *       其中 (x, y) 表示屏幕上的位置，ch 是要显示的字符。
 *       坐标系统如下：
 *
 *            (0,0) ---- x ---->
 *            |          |
 *            |          |
 *            |          |
 *            y ------ (x,y) = ch   // 用 draw(x, y, ch) 画出这个字符
 *            |
 *            v
 *
 * - 3. 函数 keypress:
 *       void keypress(int key);
 *       每当按下一个键，keypress 就会被调用一次。
 *       它适合用来记录“用户刚刚按了什么键”，比如左右移动、跳跃、退出。
 *       key 通常是这个按键对应的 ASCII 码。
 */

/* -= Toybox 公开接口 =------------------------------------- */
// draw_function 是“画一个字符”的回调类型。
// 设计思路：把画图动作做成一个统一接口，这样 update() 只需要不停调用它，
// 不用关心字符最后是怎么放到屏幕上的。
// 用法：在 update() 里调用 draw(x, y, ch)，告诉 toybox 这一帧要画什么。
typedef void (*draw_function)(int x, int y, char ch);

// toybox_run 是 toybox 的主入口。
// 设计思路：把“输入、更新、输出”这三件事包进一个循环里，
// 让初学者先学会写 update() 和 keypress()，不用先理解复杂的窗口系统。
// 参数含义：
// - fps: 每秒刷新多少次画面。
// - update: 每一帧都要执行的逻辑函数，负责更新状态并调用 draw。
// - keypress: 收到按键时的回调函数，可以为空。
// 用法：在 main() 里准备好这两个回调，然后调用 toybox_run(fps, update, keypress)。
static void
toybox_run(int fps,
    void (*update)(int, int, draw_function draw),
    void (*keypress)(int));
/* ---------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_W_ 128
#define MAX_H_ 64

// 把字符串接到缓冲区末尾，并把指针往后挪。
// 这样可以先拼好整帧内容，再一次性输出，减少闪烁。
#define append_(buf, str) \
    do { \
        strcpy(buf, str); \
        buf += strlen(str); \
    } while (0)

static uint64_t start_time_;
static int w_, h_;
// 画布：把二维屏幕摊平成一维数组保存，方便按行输出。
static char canvas_[MAX_W_ * MAX_H_];
// waitkey_ 用来“等一小会儿，看有没有按键”。
// 设计思路：不能一直阻塞等待输入，否则画面就不会刷新；
// 所以它会用很短的时间片去检查键盘。
// 参数：没有参数。
// 返回值：
// - 有按键时返回按键值；
// - 没有按键时返回 -1。
// 用法：只能在 toybox 内部的主循环里调用。
static int waitkey_(void);

// get_window_size_ 用来读取当前控制台窗口有多大。
// 设计思路：字符游戏的画面大小应该跟着窗口变化，这样用户缩放窗口时画面不会乱掉。
// 参数：
// - w: 输出参数，返回窗口宽度。
// - h: 输出参数，返回窗口高度。
// 用法：传入两个整型指针，函数会把当前尺寸写进去。
static void get_window_size_(int *w, int *h);

#ifdef _WIN32
#include <windows.h>
#include <conio.h>

// Windows 版本的按键检测。
// 设计思路：先短暂等待，再检查键盘是否有输入，这样既能响应按键，
// 又不会让主循环卡死。
// 参数：没有参数。
// 返回值：有键返回键值，没有键返回 -1。
// 用法：由 toybox_run() 在每一轮循环中调用。
static int waitkey_(void) {
    // 这一版在 Windows 下轮询按键。
    // 它不会一直卡住，所以主循环还能继续刷新画面。
    int startTime = GetTickCount();
    while (GetTickCount() - startTime < 10) {
        if (_kbhit()) {
            return _getch();
        }
    }
    return -1;
}

// Windows 版本的窗口大小读取。
// 设计思路：从控制台缓冲区里拿到当前可见区域，再换算成宽和高。
// 参数：
// - w: 输出窗口宽度。
// - h: 输出窗口高度。
// 用法：在每次绘制前调用，确保画布尺寸和窗口一致。
static void get_window_size_(int *w, int *h) {
    // 读取控制台当前可见区域的大小。
    // 如果失败，就退回到一个默认尺寸，避免程序直接崩掉。
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        *w = csbi.srWindow.Right - csbi.srWindow.Left;
        *h = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    } else {
        *w = 80;
        *h = 25;
    }
}

// Windows 版本的 gettimeofday。
// 设计思路：Windows 原生没有和 Linux 一样的 gettimeofday，所以这里自己补一个，
// 让后面的计时代码可以写成统一的形式。
// 参数：
// - tp: 输出当前时间，包含秒和微秒。
// - tzp: 时区参数，这里没有实际使用。
// 用法：内部给 timer_ms_() 使用，不建议外部直接调用。
static int gettimeofday(struct timeval * tp, struct timezone * tzp)
{
    // 注意：有些旧实现会少 1 个 0，正确的纪元值应该有 9 个 0。
    // 这个魔法数字表示：从 1601-01-01 到 1970-01-01 之间的 100 纳秒间隔数。
    static const uint64_t EPOCH = ((uint64_t) 116444736000000000ULL);

    SYSTEMTIME  system_time;
    FILETIME    file_time;
    uint64_t    time;

    GetSystemTime( &system_time );
    SystemTimeToFileTime( &system_time, &file_time );
    time =  ((uint64_t)file_time.dwLowDateTime )      ;
    time += ((uint64_t)file_time.dwHighDateTime) << 32;

    tp->tv_sec  = (long) ((time - EPOCH) / 10000000L);
    tp->tv_usec = (long) (system_time.wMilliseconds * 1000);
    return 0;
}

// Windows 版本的清屏。
// 设计思路：把整个控制台内容清空，并把光标回到左上角。
// 参数：没有参数。
// 用法：在每次输出新画面前调用，防止旧字符残留。
static void clear_screen_() {
    // Windows 下先把整个控制台清成空白，再把光标挪回左上角。
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
            console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
            console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
            screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

#else
#include <termios.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/ioctl.h>

// Linux / macOS 版本的按键检测。
// 设计思路：用 select() 等待很短的一小段时间，如果 stdin 上有输入就读一个字符；
// 如果没有输入，就立刻返回，让主循环继续推进动画。
// 参数：没有参数。
// 返回值：有键返回键值，没有键返回 -1。
// 用法：由 toybox_run() 调用。
static int waitkey_(void) {
    // Linux / macOS 下用 select() 等待一小会儿，看看有没有键盘输入。
    // 这样能做到“有键就处理，没键就继续刷新”。
    struct timeval timeout;
    fd_set readfds;
    int retval;

    timeout.tv_sec = 0;
    timeout.tv_usec = 10000;

    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);

    retval = select(STDIN_FILENO + 1, &readfds, NULL, NULL, &timeout);
    if (retval == -1) {
        exit(1);
    } if (retval) {
        char ch;
        read(STDIN_FILENO, &ch, 1);
        return ch;
    } else {
        return -1;
    }
}

// 先记住原来的终端设置，程序退出时要恢复。
struct termios old_;

// 终端初始化函数。
// 设计思路：程序一启动，就把终端改成“按键立即生效、字符不回显”的模式，
// 这样就能像游戏一样接收输入。
// 参数：没有参数。
// 用法：由编译器自动在程序启动时调用，不需要手动调用。
static void __attribute__((constructor))
termios_init_(void) {
    struct winsize win;
    struct termios cur;

    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &win) == -1) {
        printf("这不是一个终端窗口。\n");
        exit(1);
    }

    tcgetattr(STDIN_FILENO, &old_);

    cur = old_;
    cur.c_lflag &= ~(ICANON | ECHO);
    cur.c_cc[VMIN] = 0;
    cur.c_cc[VTIME] = 1;

    tcsetattr(STDIN_FILENO, TCSANOW, &cur);
}

// 终端恢复函数。
// 设计思路：程序退出时把终端设置恢复回原样，避免命令行一直处于奇怪状态。
// 参数：没有参数。
// 用法：由编译器自动在程序结束时调用。
static void __attribute__((destructor))
termios_restore_(void) {
    tcsetattr(STDIN_FILENO, TCSANOW, &old_);
}

// Linux / macOS 版本的窗口大小读取。
// 设计思路：直接向终端询问当前列数和行数，再限制到 toybox 支持的最大范围。
// 参数：
// - w: 输出窗口宽度。
// - h: 输出窗口高度。
// 用法：在每次绘制前调用一次。
static void get_window_size_(int *w, int *h) {
    // 读取当前终端窗口尺寸，并限制到 toybox 允许的最大值。
    struct winsize win;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &win);

    *w = win.ws_col < MAX_W_ ? win.ws_col : MAX_W_;
    *h = win.ws_row < MAX_H_ ? win.ws_row : MAX_H_;
}

// Linux / macOS 版本的“清屏前准备”。
// 设计思路：这里只把光标挪回左上角，真正的内容覆盖由后面的整帧输出完成。
// 参数：没有参数。
// 用法：在输出新一帧之前调用。
static void clear_screen_() {
    // ANSI 转义序列：把光标移动到左上角，下一帧会直接覆盖旧内容。
    printf("\033[H");
}

#endif

// timer_ms_ 用来获得当前时间，单位是毫秒。
// 设计思路：用统一的时间单位来做帧率控制，这样不同平台上都方便计算。
// 参数：没有参数。
// 返回值：当前时间对应的毫秒数。
// 用法：内部给帧率控制使用。
uint64_t timer_ms_(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000LL) + (tv.tv_usec / 1000);
}

// 启动时间初始化函数。
// 设计思路：程序刚开始时记录一个时间点，后面就能算出“已经运行了多久”。
// 参数：没有参数。
// 用法：由编译器在程序启动时自动调用。
static void __attribute__((constructor))
init_timer_(void) {
    start_time_ = timer_ms_();
}

// draw_ 是真正负责往画布上写字符的函数。
// 设计思路：它只做“把字符放进数组”这一件事，不负责刷新屏幕，
// 这样 update() 可以放心地调用很多次，最后一起显示。
// 参数：
// - x: 字符在画布上的横坐标。
// - y: 字符在画布上的纵坐标。
// - ch: 要画的字符。
// 用法：由 update() 间接调用，通常传给 toybox 的 draw 回调就是它。
void draw_(int x, int y, char ch) {
    if (0 <= x && x < w_ && 0 <= y && y < h_) {
        canvas_[y * w_ + x] = ch;
    }
}

// 参数：
// - fps: 每秒刷新次数，控制动画速度。
// - update: 每帧都要执行的逻辑函数，负责更新状态和绘图。
// - keypress: 收到按键时的回调函数，可以为空。
// 用法：直接从 main() 调用，传入你写好的 update 和 keypress。
static void
toybox_run(int fps,
    void (*update)(int, int, draw_function draw),
    void (*keypress)(int)) {
    uint64_t last_time = 0;
    int i, last_size = -1;
    char buffer[MAX_W_ * MAX_H_ + MAX_H_ * 2 + 4096], *head;

    // 主循环：先检查有没有按键，再看看是不是该刷新下一帧。
    // 这种写法把输入和动画节奏放在同一个循环里，结构简单，适合初学者理解。
    while (1) {
        int key = waitkey_();
        if (key > 0) {
            if (keypress) {
                // 这里把“按键事件”交给你自己的处理函数。
                keypress(key);
            }
            continue;
        } else {
            // 如果这一轮没有新按键，就按 fps 控制刷新节奏。
            uint64_t t = timer_ms_() - start_time_;
            if (t - last_time <= 1000 / fps) {
                continue;
            }
            last_time = t;
        }

        // 每一帧都重新读取窗口大小，缩放窗口时画面也能跟着适应。
        get_window_size_(&w_, &h_);
        // 先把整张画布擦成空格，再让 update() 重新画。
        memset(canvas_, ' ', sizeof(canvas_));
        update(w_, h_, draw_);

        // buffer 是“这一帧要输出的完整文本”。
        // 先把光标和清屏指令拼进去，再拼每一行内容。
        head = buffer;
        clear_screen_();

        if ((w_ << 16) + h_ != last_size) {
            last_size = (w_ << 16) + h_;
            // 屏幕大小变了时，先执行一次全屏清除，避免旧内容残留。
            append_(head, "\033[2J");
        }

        for (i = 0; i < h_; i++) {
            if (i != 0) {
                // 行与行之间换行，才能拼出一个真正的二维画面。
                append_(head, "\r\n");
            }
            // 把这一行的字符直接拷贝进输出缓冲区。
            strncpy(head, &canvas_[i * w_], w_);
            head += w_;
        }

        // 一次性输出整帧，减少闪烁，也让画面看起来更连贯。
        fwrite(buffer, head - buffer, 1, stdout);
        fflush(stdout);
    }
}
