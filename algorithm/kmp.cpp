#include <iostream>
#include <cstring>

const int N = 1000010;
char s[N], t[N];
int f[N];  // f[0]=0, f[i] 表示前 i 个字符的最长 border 长度 (1≤i≤m)

// 计算 1‑based next 数组，m 为模式串长度
void next(char t[], int f[], int m) {
    f[0] =  f[1] = 0;    
    int p = 0;                 // 单字符 border 长度为 0
    for (int i = 1; i < m; ++i) {
        while (p && t[p] != t[i])   // t[p] 是下一个待匹配字符，t[i] 是当前字符
            p = f[p];             // 失败则回退到更短 border
        if (t[p] == t[i])
            ++p;
        f[i+1] = p;                 // 记录前 i+1 个字符的 border 长度
    }
}

void nextval(char t[], int f[], int m) {
    f[0] = 0; f[1] = 0;
    int p = 0;                 // p 恒为“原始的” next 值（前一个长度的 border）
    for (int i = 1; i < m; ++i) {
        while (p && t[p] != t[i])
            p = f[p];          // 这里用已修正的 f 回退，是为了快速跳过，但 p 最终会等于原始 next
        if (t[p] == t[i])
            ++p;
        // 记录修正后的值
        f[i+1] = (t[i+1] == t[p]) ? f[p] : p;
        // 但下一次循环还需要原始 next 值，所以不能直接用 f[i+1] 赋值给 p？
        // 实际上标准的严蔚敏写法是维护 i 和 j（即 p），在循环中更新。
    }
}

// 在文本串 s 中查找模式串 t，n,m 为长度，f 为 1‑based next 数组
void find(char s[], char t[], int f[], int n, int m) {
    int p = 0;                    // 当前已匹配的长度（也是下一个待比较的 t 索引）
    for (int i = 0; i < n; ++i) {
        while (p && t[p] != s[i])
            p = f[p];             // 失配时，回退到长度为 p 的前缀的 border
        if (t[p] == s[i])
            ++p;
        if (p == m) {             // 完全匹配
            std::cout << i - m + 2 << '\n';  // 转换为 1‑based 起始位置
            p = f[p];             // 继续查找后续匹配
        }
    }
}

int main() {
    std::cin >> s >> t;           // 0‑based 读入
    int n = strlen(s);
    int m = strlen(t);

    nextval(t, f, m);                // f[0..m]
    find(s, t, f, n, m);

    // 通常题目要求输出 f[1..m]
    for (int i = 1; i <= m; ++i)
        std::cout << f[i] << ' ';
    std::cout << '\n';

    return 0;
}