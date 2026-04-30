# OI Wiki 知识点目录与例题索引

资料来源：[OI Wiki](https://oi-wiki.org/)。例题整理原则：优先列出 OI Wiki 对应页面出现的模板题、例题或习题；页面未给出、数量不足 3 个或需要同类强化时，再补充洛谷经典题。每个知识点至少 3 道例题。

## 目录和索引

| 序号 | 知识类别 | 表格位置 |
|---:|---|---|
| 1 | 语言基础与 STL | [语言基础与 STL](#语言基础与-stl) |
| 2 | 算法基础 | [算法基础](#算法基础) |
| 3 | 搜索 | [搜索](#搜索) |
| 4 | 动态规划 | [动态规划](#动态规划) |
| 5 | 字符串 | [字符串](#字符串) |
| 6 | 数学 | [数学](#数学) |
| 7 | 数据结构 | [数据结构](#数据结构) |
| 8 | 图论 | [图论](#图论) |
| 9 | 计算几何 | [计算几何](#计算几何) |
| 10 | 杂项与专题 | [杂项与专题](#杂项与专题) |

## 语言基础与 STL

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [C++ 语法基础](https://oi-wiki.org/lang/basic/) | 输入输出、基本语句、类型转换、表达式求值，是刷题代码的基础。 | [P1001 A+B Problem](https://www.luogu.com.cn/problem/P1001)<br>[P5703 苹果采购](https://www.luogu.com.cn/problem/P5703)<br>[P5704 字母转换](https://www.luogu.com.cn/problem/P5704) |
| 2 | [变量](https://oi-wiki.org/lang/var/) | 整型范围、浮点误差、`long long` 与溢出判断。 | [P5703 苹果采购](https://www.luogu.com.cn/problem/P5703)<br>[P5706 再分肥宅水](https://www.luogu.com.cn/problem/P5706)<br>[P5708 三角形面积](https://www.luogu.com.cn/problem/P5708) |
| 3 | [数组](https://oi-wiki.org/lang/array/) | 一维/二维数组、下标边界、静态数组初始化。 | [P5730 显示屏](https://www.luogu.com.cn/problem/P5730)<br>[P1428 小鱼比可爱](https://www.luogu.com.cn/problem/P1428)<br>[P1047 校门外的树](https://www.luogu.com.cn/problem/P1047) |
| 4 | [结构体](https://oi-wiki.org/lang/struct/) | 将多个字段绑定为记录，常用于排序、图边、点坐标。 | [P5740 最厉害的学生](https://www.luogu.com.cn/problem/P5740)<br>[P1093 奖学金](https://www.luogu.com.cn/problem/P1093)<br>[P1104 生日](https://www.luogu.com.cn/problem/P1104) |
| 5 | [函数](https://oi-wiki.org/lang/func/) | 参数传递、返回值、递归调用、函数封装。 | [P5735 距离函数](https://www.luogu.com.cn/problem/P5735)<br>[P5737 闰年展示](https://www.luogu.com.cn/problem/P5737)<br>[P1028 数的计算](https://www.luogu.com.cn/problem/P1028) |
| 6 | [STL 序列式容器](https://oi-wiki.org/lang/csl/sequence-container/) | `vector`、`deque`、`list` 的访问和插入删除复杂度。 | [P3156 【深基15.例1】询问学号](https://www.luogu.com.cn/problem/P3156)<br>[P3613 【深基15.例2】寄包柜](https://www.luogu.com.cn/problem/P3613)<br>[P1160 队列安排](https://www.luogu.com.cn/problem/P1160) |
| 7 | [STL 关联式容器](https://oi-wiki.org/lang/csl/associative-container/) | `set`、`map` 基于有序树，支持有序查询和去重。 | [P3370 【模板】字符串哈希](https://www.luogu.com.cn/problem/P3370)<br>[P1102 A-B 数对](https://www.luogu.com.cn/problem/P1102)<br>[P5250 【深基17.例5】木材仓库](https://www.luogu.com.cn/problem/P5250) |
| 8 | [STL 算法](https://oi-wiki.org/lang/csl/algorithm/) | `sort`、`lower_bound`、`unique`、`next_permutation` 等常用工具。 | [P1088 火星人](https://www.luogu.com.cn/problem/P1088)<br>[P1177 【模板】排序](https://www.luogu.com.cn/problem/P1177)<br>[P2249 【深基13.例1】查找](https://www.luogu.com.cn/problem/P2249) |
| 9 | [bitset](https://oi-wiki.org/lang/csl/bitset/) | 用机器字批量处理布尔状态，适合可达性、集合交并。 | [P4302 字符串折叠](https://www.luogu.com.cn/problem/P4302)<br>[P1048 采药](https://www.luogu.com.cn/problem/P1048)<br>[P1469 找筷子](https://www.luogu.com.cn/problem/P1469) |
| 10 | [pb_ds 平衡树](https://oi-wiki.org/lang/pb-ds/tree/) | GNU 扩展 `tree` 可做 order statistics，但需注意可移植性。 | [P3369 【模板】普通平衡树](https://www.luogu.com.cn/problem/P3369)<br>[P6136 【模板】普通平衡树](https://www.luogu.com.cn/problem/P6136)<br>[P2286 宠物收养场](https://www.luogu.com.cn/problem/P2286) |

## 算法基础

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [复杂度](https://oi-wiki.org/basic/complexity/) | 用渐进复杂度估算算法能否通过，关注时间、空间和常数。 | [P1049 装箱问题](https://www.luogu.com.cn/problem/P1049)<br>[P1177 【模板】排序](https://www.luogu.com.cn/problem/P1177)<br>[P2249 【深基13.例1】查找](https://www.luogu.com.cn/problem/P2249) |
| 2 | [枚举](https://oi-wiki.org/basic/enumerate/) | 穷举候选状态，配合剪枝、预处理降低复杂度。 | [P2089 烤鸡](https://www.luogu.com.cn/problem/P2089)<br>[P1036 选数](https://www.luogu.com.cn/problem/P1036)<br>[P1157 组合的输出](https://www.luogu.com.cn/problem/P1157) |
| 3 | [模拟](https://oi-wiki.org/basic/simulate/) | 按题意维护状态，重点是边界、顺序和数据结构选择。 | [P1067 多项式输出](https://www.luogu.com.cn/problem/P1067)<br>[P1003 铺地毯](https://www.luogu.com.cn/problem/P1003)<br>[P1563 玩具谜题](https://www.luogu.com.cn/problem/P1563) |
| 4 | [递归与分治](https://oi-wiki.org/basic/divide-and-conquer/) | 将问题拆成子问题并合并答案，常见于归并、快速幂、CDQ。 | [P1908 逆序对](https://www.luogu.com.cn/problem/P1908)<br>[P1226 【模板】快速幂](https://www.luogu.com.cn/problem/P1226)<br>[P1177 【模板】排序](https://www.luogu.com.cn/problem/P1177) |
| 5 | [贪心](https://oi-wiki.org/basic/greedy/) | 找局部最优可推出全局最优的性质，需交换论证或反证。 | [P1090 合并果子](https://www.luogu.com.cn/problem/P1090)<br>[P1208 混合牛奶](https://www.luogu.com.cn/problem/P1208)<br>[P1803 凌乱的yyy](https://www.luogu.com.cn/problem/P1803) |
| 6 | [排序应用](https://oi-wiki.org/basic/use-of-sort/) | 排序后处理排名、去重、区间、邻项关系。 | [P1177 【模板】排序](https://www.luogu.com.cn/problem/P1177)<br>[P1093 奖学金](https://www.luogu.com.cn/problem/P1093)<br>[P1059 明明的随机数](https://www.luogu.com.cn/problem/P1059) |
| 7 | [前缀和与差分](https://oi-wiki.org/basic/prefix-sum/) | 前缀和快速求区间和，差分快速做区间增量。 | [P3406 海底高铁](https://www.luogu.com.cn/problem/P3406)<br>[P8218 求区间和](https://www.luogu.com.cn/problem/P8218)<br>[P2367 语文成绩](https://www.luogu.com.cn/problem/P2367) |
| 8 | [二分](https://oi-wiki.org/basic/binary/) | 在单调答案空间中查找临界值，注意边界和判定函数。 | [P2249 【深基13.例1】查找](https://www.luogu.com.cn/problem/P2249)<br>[P1873 砍树](https://www.luogu.com.cn/problem/P1873)<br>[P2678 跳石头](https://www.luogu.com.cn/problem/P2678) |
| 9 | [倍增](https://oi-wiki.org/basic/binary-lifting/) | 预处理 2 的幂级跳转，支持快速祖先、区间跳跃。 | [P3379 【模板】最近公共祖先](https://www.luogu.com.cn/problem/P3379)<br>[P3865 【模板】ST 表](https://www.luogu.com.cn/problem/P3865)<br>[P1081 开车旅行](https://www.luogu.com.cn/problem/P1081) |
| 10 | [构造](https://oi-wiki.org/basic/construction/) | 通过观察不变量、奇偶性、排列性质直接构造答案。 | [P3599 Koishi Loves Construction](https://www.luogu.com.cn/problem/P3599)<br>[P5595 【XR-4】歌唱比赛](https://www.luogu.com.cn/problem/P5595)<br>[P7960 NOIP2021 报数](https://www.luogu.com.cn/problem/P7960) |

## 搜索

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [DFS](https://oi-wiki.org/search/dfs/) | 深度优先遍历状态树，常配合回溯、剪枝、连通性。 | [P1605 迷宫](https://www.luogu.com.cn/problem/P1605)<br>[P1219 八皇后](https://www.luogu.com.cn/problem/P1219)<br>[P1036 选数](https://www.luogu.com.cn/problem/P1036) |
| 2 | [BFS](https://oi-wiki.org/search/bfs/) | 按层扩展状态，适合无权最短路和最少步数问题。 | [P1443 马的遍历](https://www.luogu.com.cn/problem/P1443)<br>[P1162 填涂颜色](https://www.luogu.com.cn/problem/P1162)<br>[P1141 01迷宫](https://www.luogu.com.cn/problem/P1141) |
| 3 | [双向搜索](https://oi-wiki.org/search/bidirectional/) | 从起点和终点同时扩展，降低指数级搜索深度。 | [P1379 八数码难题](https://www.luogu.com.cn/problem/P1379)<br>[P1032 字串变换](https://www.luogu.com.cn/problem/P1032)<br>[P3067 Balanced Cow Subsets G](https://www.luogu.com.cn/problem/P3067) |
| 4 | [启发式搜索](https://oi-wiki.org/search/heuristic/) | 用估价函数决定扩展顺序或剪枝，减少无效状态。 | [P2324 骑士精神](https://www.luogu.com.cn/problem/P2324)<br>[P1379 八数码难题](https://www.luogu.com.cn/problem/P1379)<br>[P1120 小木棍](https://www.luogu.com.cn/problem/P1120) |
| 5 | [A*](https://oi-wiki.org/search/astar/) | 优先扩展 `g+h` 最小状态，要求估价函数不高估真实代价。 | [P1379 八数码难题](https://www.luogu.com.cn/problem/P1379)<br>[P2324 骑士精神](https://www.luogu.com.cn/problem/P2324)<br>[P4467 Shortcut G](https://www.luogu.com.cn/problem/P4467) |
| 6 | [迭代加深搜索](https://oi-wiki.org/search/iterative/) | 逐步增加深度上限，兼具 DFS 空间小和 BFS 层次性。 | [P1219 八皇后](https://www.luogu.com.cn/problem/P1219)<br>[P1763 埃及分数](https://www.luogu.com.cn/problem/P1763)<br>[P2324 骑士精神](https://www.luogu.com.cn/problem/P2324) |
| 7 | [IDA*](https://oi-wiki.org/search/idastar/) | 迭代加深加启发式估价，常用于状态空间巨大但答案步数较小的问题。 | [P2324 骑士精神](https://www.luogu.com.cn/problem/P2324)<br>[P1379 八数码难题](https://www.luogu.com.cn/problem/P1379)<br>[P1763 埃及分数](https://www.luogu.com.cn/problem/P1763) |
| 8 | [回溯法](https://oi-wiki.org/search/backtracking/) | 递归尝试选择并撤销，关键是剪枝和合法性检查。 | [P1784 数独](https://www.luogu.com.cn/problem/P1784)<br>[P1219 八皇后](https://www.luogu.com.cn/problem/P1219)<br>[P1120 小木棍](https://www.luogu.com.cn/problem/P1120) |
| 9 | [Dancing Links](https://oi-wiki.org/search/dlx/) | 精确覆盖问题的高效回溯结构，典型应用是数独。 | [P1784 数独](https://www.luogu.com.cn/problem/P1784)<br>[P4929 【模板】舞蹈链](https://www.luogu.com.cn/problem/P4929)<br>[P4205 【模板】最小权覆盖问题](https://www.luogu.com.cn/problem/P4205) |
| 10 | [搜索优化](https://oi-wiki.org/search/opt/) | 可行性剪枝、最优性剪枝、记忆化、状态压缩。 | [P1120 小木棍](https://www.luogu.com.cn/problem/P1120)<br>[P1433 吃奶酪](https://www.luogu.com.cn/problem/P1433)<br>[P1074 靶形数独](https://www.luogu.com.cn/problem/P1074) |

## 动态规划

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [动态规划基础](https://oi-wiki.org/dp/basic/) | 设计状态、转移、初值和计算顺序，避免重复子问题。 | [P1216 数字三角形](https://www.luogu.com.cn/problem/P1216)<br>[P1002 过河卒](https://www.luogu.com.cn/problem/P1002)<br>[P1020 导弹拦截](https://www.luogu.com.cn/problem/P1020) |
| 2 | [记忆化搜索](https://oi-wiki.org/dp/memo/) | DFS 形式写 DP，适合转移依赖不容易线性排序的状态图。 | [P1434 滑雪](https://www.luogu.com.cn/problem/P1434)<br>[P1464 Function](https://www.luogu.com.cn/problem/P1464)<br>[P1048 采药](https://www.luogu.com.cn/problem/P1048) |
| 3 | [背包 DP](https://oi-wiki.org/dp/knapsack/) | 01、完全、多重、分组背包，核心是容量维转移方向。 | [P1048 采药](https://www.luogu.com.cn/problem/P1048)<br>[P1616 疯狂的采药](https://www.luogu.com.cn/problem/P1616)<br>[P1064 金明的预算方案](https://www.luogu.com.cn/problem/P1064) |
| 4 | [区间 DP](https://oi-wiki.org/dp/interval/) | 按区间长度枚举，状态通常为 `[l,r]` 的最优值。 | [P1880 石子合并](https://www.luogu.com.cn/problem/P1880)<br>[P1063 能量项链](https://www.luogu.com.cn/problem/P1063)<br>[P4170 涂色](https://www.luogu.com.cn/problem/P4170) |
| 5 | [DAG 上的 DP](https://oi-wiki.org/dp/dag/) | 拓扑序处理有向无环图上的路径计数、最长路。 | [P4017 最大食物链计数](https://www.luogu.com.cn/problem/P4017)<br>[P1113 杂务](https://www.luogu.com.cn/problem/P1113)<br>[P1137 旅行计划](https://www.luogu.com.cn/problem/P1137) |
| 6 | [树形 DP](https://oi-wiki.org/dp/tree/) | 以父子关系合并子树信息，常见根选取和换根。 | [P1352 没有上司的舞会](https://www.luogu.com.cn/problem/P1352)<br>[P2014 选课](https://www.luogu.com.cn/problem/P2014)<br>[P2015 二叉苹果树](https://www.luogu.com.cn/problem/P2015) |
| 7 | [状压 DP](https://oi-wiki.org/dp/state/) | 用二进制表示集合或行状态，适合 `n` 较小的组合状态。 | [P1896 互不侵犯](https://www.luogu.com.cn/problem/P1896)<br>[P2704 炮兵阵地](https://www.luogu.com.cn/problem/P2704)<br>[P1433 吃奶酪](https://www.luogu.com.cn/problem/P1433) |
| 8 | [数位 DP](https://oi-wiki.org/dp/number/) | 按数字位枚举，处理上界限制、前导零、状态记忆。 | [P2602 数字计数](https://www.luogu.com.cn/problem/P2602)<br>[P2657 Windy 数](https://www.luogu.com.cn/problem/P2657)<br>[P4124 手机号码](https://www.luogu.com.cn/problem/P4124) |
| 9 | [插头 DP](https://oi-wiki.org/dp/plug/) | 按格扫描轮廓线，用连通性状态处理网格路径/铺设。 | [P5056 【模板】插头 DP](https://www.luogu.com.cn/problem/P5056)<br>[P3190 赛车](https://www.luogu.com.cn/problem/P3190)<br>[P3272 Zjoi2011 看电影](https://www.luogu.com.cn/problem/P3272) |
| 10 | [概率 DP](https://oi-wiki.org/dp/probability/) | 状态表示期望或概率，转移按条件概率加权。 | [P4316 绿豆蛙的归宿](https://www.luogu.com.cn/problem/P4316)<br>[P1850 换教室](https://www.luogu.com.cn/problem/P1850)<br>[P1291 百事世界杯之旅](https://www.luogu.com.cn/problem/P1291) |
| 11 | [单调队列优化 DP](https://oi-wiki.org/dp/opt/monotonous-queue-stack/) | 当转移是滑动窗口最值时，用单调队列降复杂度。 | [P1725 琪露诺](https://www.luogu.com.cn/problem/P1725)<br>[P1886 滑动窗口](https://www.luogu.com.cn/problem/P1886)<br>[P2627 修剪草坪](https://www.luogu.com.cn/problem/P2627) |
| 12 | [斜率优化](https://oi-wiki.org/dp/opt/slope/) | 将转移写成直线/点的最值查询，维护凸包或单调队列。 | [P3195 玩具装箱](https://www.luogu.com.cn/problem/P3195)<br>[P2365 任务安排](https://www.luogu.com.cn/problem/P2365)<br>[P3648 序列分割](https://www.luogu.com.cn/problem/P3648) |
| 13 | [四边形不等式优化](https://oi-wiki.org/dp/opt/quadrangle/) | 利用决策单调性优化区间/划分 DP。 | [P4767 邮局](https://www.luogu.com.cn/problem/P4767)<br>[P1880 石子合并](https://www.luogu.com.cn/problem/P1880)<br>[P3515 Lightning Conductor](https://www.luogu.com.cn/problem/P3515) |
| 14 | [WQS 二分](https://oi-wiki.org/dp/opt/wqs-binary-search/) | 对选取数量加权并二分惩罚值，将限制型优化转为无约束优化。 | [P2619 Tree I](https://www.luogu.com.cn/problem/P2619)<br>[P4383 林克卡特树](https://www.luogu.com.cn/problem/P4383)<br>[P5308 Fractal](https://www.luogu.com.cn/problem/P5308) |

## 字符串

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [字符串基础](https://oi-wiki.org/string/basic/) | 字符串存储、字典序、子串、前后缀概念。 | [P5733 自动修正](https://www.luogu.com.cn/problem/P5733)<br>[P1308 统计单词数](https://www.luogu.com.cn/problem/P1308)<br>[P1553 数字反转](https://www.luogu.com.cn/problem/P1553) |
| 2 | [字符串哈希](https://oi-wiki.org/string/hash/) | 将字符串映射为数值，快速比较子串，注意冲突和模数选择。 | [P3370 【模板】字符串哈希](https://www.luogu.com.cn/problem/P3370)<br>[P3501 ANT-Antisymmetry](https://www.luogu.com.cn/problem/P3501)<br>[P4824 Censoring S](https://www.luogu.com.cn/problem/P4824) |
| 3 | [Trie](https://oi-wiki.org/string/trie/) | 前缀树支持字符串集合插入、查询、前缀统计。 | [P8306 【模板】字典树](https://www.luogu.com.cn/problem/P8306)<br>[P2580 于是他错误的点名开始了](https://www.luogu.com.cn/problem/P2580)<br>[P2922 Secret Message G](https://www.luogu.com.cn/problem/P2922) |
| 4 | [KMP](https://oi-wiki.org/string/kmp/) | 前缀函数避免重复匹配，线性求模式串出现位置。 | [P3375 【模板】KMP](https://www.luogu.com.cn/problem/P3375)<br>[P4391 Radio Transmission](https://www.luogu.com.cn/problem/P4391)<br>[P3435 OKR-Periods of Words](https://www.luogu.com.cn/problem/P3435) |
| 5 | [Z 函数](https://oi-wiki.org/string/z-func/) | `z[i]` 表示从 `i` 开始与前缀的最长公共前缀。 | [P5410 【模板】扩展 KMP](https://www.luogu.com.cn/problem/P5410)<br>[P3375 【模板】KMP](https://www.luogu.com.cn/problem/P3375)<br>[P3435 OKR-Periods of Words](https://www.luogu.com.cn/problem/P3435) |
| 6 | [AC 自动机](https://oi-wiki.org/string/ac-automaton/) | Trie 加失配指针，多模式串匹配和敏感词统计。 | [P3808 【模板】AC 自动机](https://www.luogu.com.cn/problem/P3808)<br>[P3796 【模板】AC 自动机加强版](https://www.luogu.com.cn/problem/P3796)<br>[P5357 【模板】AC 自动机二次加强版](https://www.luogu.com.cn/problem/P5357) |
| 7 | [后缀数组](https://oi-wiki.org/string/sa/) | 对所有后缀排序，结合 LCP 处理重复子串、字典序问题。 | [P3809 【模板】后缀排序](https://www.luogu.com.cn/problem/P3809)<br>[P2852 Milk Patterns G](https://www.luogu.com.cn/problem/P2852)<br>[P2408 不同子串个数](https://www.luogu.com.cn/problem/P2408) |
| 8 | [后缀自动机](https://oi-wiki.org/string/sam/) | 维护所有子串的自动机结构，常用于不同子串数、最长公共子串。 | [P3804 【模板】后缀自动机](https://www.luogu.com.cn/problem/P3804)<br>[P2408 不同子串个数](https://www.luogu.com.cn/problem/P2408)<br>[P3975 TJOI2015 弦论](https://www.luogu.com.cn/problem/P3975) |
| 9 | [Manacher](https://oi-wiki.org/string/manacher/) | 线性求每个中心的回文半径，处理最长回文子串。 | [P3805 【模板】manacher](https://www.luogu.com.cn/problem/P3805)<br>[P4555 最长双回文串](https://www.luogu.com.cn/problem/P4555)<br>[P1659 拉拉队排练](https://www.luogu.com.cn/problem/P1659) |
| 10 | [回文树](https://oi-wiki.org/string/pam/) | 动态维护所有本质不同回文子串。 | [P5496 【模板】回文自动机](https://www.luogu.com.cn/problem/P5496)<br>[P3649 回文串](https://www.luogu.com.cn/problem/P3649)<br>[P4287 双倍回文](https://www.luogu.com.cn/problem/P4287) |
| 11 | [最小表示法](https://oi-wiki.org/string/minimal-string/) | 求循环同构字符串中字典序最小表示，常用双指针。 | [P1368 【模板】最小表示法](https://www.luogu.com.cn/problem/P1368)<br>[P1209 修理牛棚](https://www.luogu.com.cn/problem/P1209)<br>[P3538 OKR-A Horrible Poem](https://www.luogu.com.cn/problem/P3538) |
| 12 | [Lyndon 分解](https://oi-wiki.org/string/lyndon/) | 将字符串唯一分解为非增 Lyndon 串，Duval 算法线性实现。 | [P6114 【模板】Lyndon 分解](https://www.luogu.com.cn/problem/P6114)<br>[P1368 【模板】最小表示法](https://www.luogu.com.cn/problem/P1368)<br>[P5829 【模板】失配树](https://www.luogu.com.cn/problem/P5829) |

## 数学

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [位操作](https://oi-wiki.org/math/bit/) | 位运算、lowbit、异或性质、集合压缩。 | [P1469 找筷子](https://www.luogu.com.cn/problem/P1469)<br>[P5657 格雷码](https://www.luogu.com.cn/problem/P5657)<br>[P1171 售货员的难题](https://www.luogu.com.cn/problem/P1171) |
| 2 | [快速幂](https://oi-wiki.org/math/binary-exponentiation/) | 二进制拆分指数，常用于幂、矩阵幂、模幂。 | [P1226 【模板】快速幂](https://www.luogu.com.cn/problem/P1226)<br>[P3390 【模板】矩阵快速幂](https://www.luogu.com.cn/problem/P3390)<br>[P1962 斐波那契数列](https://www.luogu.com.cn/problem/P1962) |
| 3 | [高精度](https://oi-wiki.org/math/bignum/) | 用数组/字符串模拟大整数四则运算。 | [P1601 A+B Problem 高精](https://www.luogu.com.cn/problem/P1601)<br>[P2142 高精度减法](https://www.luogu.com.cn/problem/P2142)<br>[P1303 A*B Problem](https://www.luogu.com.cn/problem/P1303) |
| 4 | [最大公约数](https://oi-wiki.org/math/number-theory/gcd/) | 欧几里得算法、扩展欧几里得、裴蜀定理。 | [P5656 【模板】二元一次不定方程](https://www.luogu.com.cn/problem/P5656)<br>[P4549 裴蜀定理](https://www.luogu.com.cn/problem/P4549)<br>[P1082 【模板】同余方程](https://www.luogu.com.cn/problem/P1082) |
| 5 | [素数与筛法](https://oi-wiki.org/math/number-theory/sieve/) | 埃氏筛、欧拉筛、素数判定、积性函数预处理。 | [P3383 【模板】线性筛素数](https://www.luogu.com.cn/problem/P3383)<br>[P1835 素数密度](https://www.luogu.com.cn/problem/P1835)<br>[P3912 素数个数](https://www.luogu.com.cn/problem/P3912) |
| 6 | [欧拉函数](https://oi-wiki.org/math/number-theory/euler-totient/) | 统计互质个数，是积性函数，常与欧拉定理结合。 | [P2158 仪仗队](https://www.luogu.com.cn/problem/P2158)<br>[P2568 GCD](https://www.luogu.com.cn/problem/P2568)<br>[P2398 GCD SUM](https://www.luogu.com.cn/problem/P2398) |
| 7 | [模逆元](https://oi-wiki.org/math/number-theory/inverse/) | 用扩展欧几里得、费马小定理或线性递推求逆元。 | [P3811 【模板】乘法逆元](https://www.luogu.com.cn/problem/P3811)<br>[P1082 【模板】同余方程](https://www.luogu.com.cn/problem/P1082)<br>[P5431 【模板】乘法逆元 2](https://www.luogu.com.cn/problem/P5431) |
| 8 | [中国剩余定理](https://oi-wiki.org/math/number-theory/crt/) | 合并同余方程组，扩展 CRT 处理非互质模数。 | [P1495 【模板】中国剩余定理](https://www.luogu.com.cn/problem/P1495)<br>[P4777 【模板】扩展中国剩余定理](https://www.luogu.com.cn/problem/P4777)<br>[P3868 猜数字](https://www.luogu.com.cn/problem/P3868) |
| 9 | [卢卡斯定理](https://oi-wiki.org/math/number-theory/lucas/) | 计算大组合数模小质数，按 p 进制分解。 | [P3807 【模板】卢卡斯定理](https://www.luogu.com.cn/problem/P3807)<br>[P2822 组合数问题](https://www.luogu.com.cn/problem/P2822)<br>[P2480 古代猪文](https://www.luogu.com.cn/problem/P2480) |
| 10 | [莫比乌斯反演](https://oi-wiki.org/math/number-theory/mobius/) | 将 gcd 条件转化为整除卷积，常配合数论分块。 | [P2522 Problem b](https://www.luogu.com.cn/problem/P2522)<br>[P3327 约数个数和](https://www.luogu.com.cn/problem/P3327)<br>[P3455 Zap-Queries](https://www.luogu.com.cn/problem/P3455) |
| 11 | [数论分块](https://oi-wiki.org/math/number-theory/sqrt-decomposition/) | 对 `floor(n/i)` 相同区间整体处理，复杂度约 `O(sqrt n)`。 | [P2261 余数求和](https://www.luogu.com.cn/problem/P2261)<br>[P3935 Calculating](https://www.luogu.com.cn/problem/P3935)<br>[P2424 约数和](https://www.luogu.com.cn/problem/P2424) |
| 12 | [FFT](https://oi-wiki.org/math/poly/fft/) | 复数快速傅里叶变换，用于多项式卷积。 | [P3803 【模板】多项式乘法 FFT](https://www.luogu.com.cn/problem/P3803)<br>[P1919 【模板】高精度乘法](https://www.luogu.com.cn/problem/P1919)<br>[P3338 ZJOI2014 力](https://www.luogu.com.cn/problem/P3338) |
| 13 | [NTT](https://oi-wiki.org/math/poly/ntt/) | 在模意义下做卷积，要求原根和友好模数。 | [P3803 【模板】多项式乘法](https://www.luogu.com.cn/problem/P3803)<br>[P4245 【模板】任意模数多项式乘法](https://www.luogu.com.cn/problem/P4245)<br>[P4725 【模板】多项式对数函数](https://www.luogu.com.cn/problem/P4725) |
| 14 | [组合数学](https://oi-wiki.org/math/combinatorics/combination/) | 排列组合、组合数递推、预处理阶乘与逆元。 | [P2822 组合数问题](https://www.luogu.com.cn/problem/P2822)<br>[P3807 【模板】卢卡斯定理](https://www.luogu.com.cn/problem/P3807)<br>[P1313 计算系数](https://www.luogu.com.cn/problem/P1313) |
| 15 | [卡特兰数](https://oi-wiki.org/math/combinatorics/catalan/) | 常见于括号序列、出栈序列、二叉树计数。 | [P1044 栈](https://www.luogu.com.cn/problem/P1044)<br>[P2532 树屋阶梯](https://www.luogu.com.cn/problem/P2532)<br>[P3200 有趣的数](https://www.luogu.com.cn/problem/P3200) |
| 16 | [矩阵](https://oi-wiki.org/math/linear-algebra/matrix/) | 矩阵乘法、矩阵快速幂、线性递推加速。 | [P3390 【模板】矩阵快速幂](https://www.luogu.com.cn/problem/P3390)<br>[P1962 斐波那契数列](https://www.luogu.com.cn/problem/P1962)<br>[P1939 【模板】矩阵加速](https://www.luogu.com.cn/problem/P1939) |
| 17 | [线性基](https://oi-wiki.org/math/linear-algebra/basis/) | 维护异或向量空间，求最大异或和、可表示性。 | [P3812 【模板】线性基](https://www.luogu.com.cn/problem/P3812)<br>[P3857 彩灯](https://www.luogu.com.cn/problem/P3857)<br>[P4570 元素](https://www.luogu.com.cn/problem/P4570) |
| 18 | [高斯消元](https://oi-wiki.org/math/numerical/gauss/) | 解线性方程组，注意主元选择、无解/多解判断。 | [P3389 【模板】高斯消元法](https://www.luogu.com.cn/problem/P3389)<br>[P2455 【模板】线性方程组](https://www.luogu.com.cn/problem/P2455)<br>[P2447 外星千足虫](https://www.luogu.com.cn/problem/P2447) |
| 19 | [博弈论](https://oi-wiki.org/math/game-theory/impartial-game/) | SG 函数、N/P 态、Nim 和异或判定。 | [P2197 Nim 游戏](https://www.luogu.com.cn/problem/P2197)<br>[P2252 取石子游戏](https://www.luogu.com.cn/problem/P2252)<br>[P2575 高手过招](https://www.luogu.com.cn/problem/P2575) |

## 数据结构

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [栈](https://oi-wiki.org/ds/stack/) | 后进先出，常用于括号匹配、单调栈、表达式求值。 | [P1739 表达式括号匹配](https://www.luogu.com.cn/problem/P1739)<br>[P1449 后缀表达式](https://www.luogu.com.cn/problem/P1449)<br>[P1175 表达式的转换](https://www.luogu.com.cn/problem/P1175) |
| 2 | [队列](https://oi-wiki.org/ds/queue/) | 先进先出，是 BFS 和滑动窗口的基础结构。 | [P1443 马的遍历](https://www.luogu.com.cn/problem/P1443)<br>[P1540 机器翻译](https://www.luogu.com.cn/problem/P1540)<br>[P1886 滑动窗口](https://www.luogu.com.cn/problem/P1886) |
| 3 | [并查集](https://oi-wiki.org/ds/dsu/) | 维护集合合并与连通性，路径压缩和按秩合并近似常数。 | [P3367 【模板】并查集](https://www.luogu.com.cn/problem/P3367)<br>[P1551 亲戚](https://www.luogu.com.cn/problem/P1551)<br>[P2024 食物链](https://www.luogu.com.cn/problem/P2024) |
| 4 | [堆](https://oi-wiki.org/ds/binary-heap/) | 维护动态最值，支持优先队列、Dijkstra、贪心合并。 | [P3378 【模板】堆](https://www.luogu.com.cn/problem/P3378)<br>[P1090 合并果子](https://www.luogu.com.cn/problem/P1090)<br>[P4779 【模板】单源最短路径](https://www.luogu.com.cn/problem/P4779) |
| 5 | [单调栈](https://oi-wiki.org/ds/monotonous-stack/) | 维护单调候选，求最近更大/更小元素。 | [P5788 【模板】单调栈](https://www.luogu.com.cn/problem/P5788)<br>[P2866 Bad Hair Day S](https://www.luogu.com.cn/problem/P2866)<br>[P4147 玉蟾宫](https://www.luogu.com.cn/problem/P4147) |
| 6 | [单调队列](https://oi-wiki.org/ds/monotonous-queue/) | 维护滑动窗口最值，常用于窗口问题和 DP 优化。 | [P1886 滑动窗口](https://www.luogu.com.cn/problem/P1886)<br>[P1725 琪露诺](https://www.luogu.com.cn/problem/P1725)<br>[P2627 修剪草坪](https://www.luogu.com.cn/problem/P2627) |
| 7 | [ST 表](https://oi-wiki.org/ds/sparse-table/) | 静态 RMQ，`O(n log n)` 预处理，`O(1)` 查询。 | [P3865 【模板】ST 表](https://www.luogu.com.cn/problem/P3865)<br>[P2880 Balanced Lineup G](https://www.luogu.com.cn/problem/P2880)<br>[P1816 忠诚](https://www.luogu.com.cn/problem/P1816) |
| 8 | [树状数组](https://oi-wiki.org/ds/fenwick/) | 用 lowbit 维护前缀和，支持单点修改、区间查询。 | [P3374 【模板】树状数组 1](https://www.luogu.com.cn/problem/P3374)<br>[P3368 【模板】树状数组 2](https://www.luogu.com.cn/problem/P3368)<br>[P1908 逆序对](https://www.luogu.com.cn/problem/P1908) |
| 9 | [线段树](https://oi-wiki.org/ds/seg/) | 区间信息维护，支持区间修改、查询和懒标记。 | [P3372 【模板】线段树 1](https://www.luogu.com.cn/problem/P3372)<br>[P3373 【模板】线段树 2](https://www.luogu.com.cn/problem/P3373)<br>[P4513 小白逛公园](https://www.luogu.com.cn/problem/P4513) |
| 10 | [线段树合并](https://oi-wiki.org/ds/seg-merge-split/) | 合并动态开点线段树，常用于树上统计。 | [P4556 雨天的尾巴](https://www.luogu.com.cn/problem/P4556)<br>[P3605 Promotion Counting](https://www.luogu.com.cn/problem/P3605)<br>[P3224 永无乡](https://www.luogu.com.cn/problem/P3224) |
| 11 | [李超线段树](https://oi-wiki.org/ds/li-chao-tree/) | 动态维护直线集合，查询某点最值。 | [P4097 【模板】李超线段树](https://www.luogu.com.cn/problem/P4097)<br>[P4254 Blue Mary 开公司](https://www.luogu.com.cn/problem/P4254)<br>[P4655 Building Bridges](https://www.luogu.com.cn/problem/P4655) |
| 12 | [平衡树](https://oi-wiki.org/ds/bst/) | 维护有序集合，支持排名、前驱、后继、插删查。 | [P3369 【模板】普通平衡树](https://www.luogu.com.cn/problem/P3369)<br>[P6136 【模板】普通平衡树](https://www.luogu.com.cn/problem/P6136)<br>[P2286 宠物收养场](https://www.luogu.com.cn/problem/P2286) |
| 13 | [Treap](https://oi-wiki.org/ds/treap/) | 用随机优先级保持期望平衡，可实现 FHQ Treap。 | [P3369 【模板】普通平衡树](https://www.luogu.com.cn/problem/P3369)<br>[P3391 【模板】文艺平衡树](https://www.luogu.com.cn/problem/P3391)<br>[P3835 【模板】可持久化平衡树](https://www.luogu.com.cn/problem/P3835) |
| 14 | [Splay](https://oi-wiki.org/ds/splay/) | 通过旋转把访问节点伸展到根，可维护序列和 LCT 辅助树。 | [P3391 【模板】文艺平衡树](https://www.luogu.com.cn/problem/P3391)<br>[P3369 【模板】普通平衡树](https://www.luogu.com.cn/problem/P3369)<br>[P3690 【模板】动态树](https://www.luogu.com.cn/problem/P3690) |
| 15 | [可持久化线段树](https://oi-wiki.org/ds/persistent-seg/) | 复制路径保留历史版本，常用于静态区间第 k 小。 | [P3834 【模板】可持久化线段树 2](https://www.luogu.com.cn/problem/P3834)<br>[P3919 【模板】可持久化数组](https://www.luogu.com.cn/problem/P3919)<br>[P2633 Count on a tree](https://www.luogu.com.cn/problem/P2633) |
| 16 | [左偏树](https://oi-wiki.org/ds/leftist-tree/) | 可并堆结构，支持快速合并两个堆。 | [P3377 【模板】左偏树](https://www.luogu.com.cn/problem/P3377)<br>[P2713 罗马游戏](https://www.luogu.com.cn/problem/P2713)<br>[P3261 城池攻占](https://www.luogu.com.cn/problem/P3261) |
| 17 | [K-D Tree](https://oi-wiki.org/ds/kdt/) | 多维空间划分，支持最近点、矩形查询等。 | [P4357 CQOI2016 K 远点对](https://www.luogu.com.cn/problem/P4357)<br>[P4169 Vani 有约会](https://www.luogu.com.cn/problem/P4169)<br>[P4475 巧克力王国](https://www.luogu.com.cn/problem/P4475) |
| 18 | [Link Cut Tree](https://oi-wiki.org/ds/lct/) | 动态树维护连通性和链信息，基于 Splay。 | [P3690 【模板】动态树](https://www.luogu.com.cn/problem/P3690)<br>[P2147 洞穴勘测](https://www.luogu.com.cn/problem/P2147)<br>[P3203 弹飞绵羊](https://www.luogu.com.cn/problem/P3203) |

## 图论

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [图的存储](https://oi-wiki.org/graph/save/) | 邻接矩阵、邻接表、链式前向星，按边数和操作选结构。 | [P3916 图的遍历](https://www.luogu.com.cn/problem/P3916)<br>[P5318 查找文献](https://www.luogu.com.cn/problem/P5318)<br>[P3371 【模板】单源最短路径弱化版](https://www.luogu.com.cn/problem/P3371) |
| 2 | [图上 DFS](https://oi-wiki.org/graph/dfs/) | 遍历连通块、时间戳、搜索树，是 Tarjan 类算法基础。 | [P3916 图的遍历](https://www.luogu.com.cn/problem/P3916)<br>[P5318 查找文献](https://www.luogu.com.cn/problem/P5318)<br>[P3388 【模板】割点](https://www.luogu.com.cn/problem/P3388) |
| 3 | [图上 BFS](https://oi-wiki.org/graph/bfs/) | 求无权最短路和层次图。 | [P1141 01迷宫](https://www.luogu.com.cn/problem/P1141)<br>[P1443 马的遍历](https://www.luogu.com.cn/problem/P1443)<br>[P5318 查找文献](https://www.luogu.com.cn/problem/P5318) |
| 4 | [拓扑排序](https://oi-wiki.org/graph/topo/) | 处理 DAG 依赖关系，判断环、做 DAG DP。 | [P1113 杂务](https://www.luogu.com.cn/problem/P1113)<br>[P4017 最大食物链计数](https://www.luogu.com.cn/problem/P4017)<br>[P1137 旅行计划](https://www.luogu.com.cn/problem/P1137) |
| 5 | [最短路](https://oi-wiki.org/graph/shortest-path/) | Dijkstra、Bellman-Ford、SPFA、Floyd，按边权特性选择。 | [P4779 【模板】单源最短路径](https://www.luogu.com.cn/problem/P4779)<br>[P3371 【模板】单源最短路径弱化版](https://www.luogu.com.cn/problem/P3371)<br>[P5905 【模板】Johnson 全源最短路](https://www.luogu.com.cn/problem/P5905) |
| 6 | [差分约束](https://oi-wiki.org/graph/diff-constraints/) | 将不等式转化为最短路/最长路约束图。 | [P5960 【模板】差分约束](https://www.luogu.com.cn/problem/P5960)<br>[P1993 小 K 的农场](https://www.luogu.com.cn/problem/P1993)<br>[P3275 糖果](https://www.luogu.com.cn/problem/P3275) |
| 7 | [最小生成树](https://oi-wiki.org/graph/mst/) | Kruskal 和 Prim，核心是切分性质和环性质。 | [P3366 【模板】最小生成树](https://www.luogu.com.cn/problem/P3366)<br>[P1194 买礼物](https://www.luogu.com.cn/problem/P1194)<br>[P2872 Building Roads S](https://www.luogu.com.cn/problem/P2872) |
| 8 | [树的直径](https://oi-wiki.org/graph/tree-diameter/) | 两次 DFS/BFS 或树形 DP 求树上最长路径。 | [P3304 直径](https://www.luogu.com.cn/problem/P3304)<br>[P2195 HXY 造公园](https://www.luogu.com.cn/problem/P2195)<br>[P4408 逃学的小孩](https://www.luogu.com.cn/problem/P4408) |
| 9 | [最近公共祖先](https://oi-wiki.org/graph/lca/) | 倍增、Euler 序 RMQ、Tarjan 离线处理树上祖先查询。 | [P3379 【模板】最近公共祖先](https://www.luogu.com.cn/problem/P3379)<br>[P3398 仓鼠找 sugar](https://www.luogu.com.cn/problem/P3398)<br>[P1967 货车运输](https://www.luogu.com.cn/problem/P1967) |
| 10 | [树链剖分](https://oi-wiki.org/graph/hld/) | 将树上路径拆为 `O(log n)` 条重链，配合线段树。 | [P3384 【模板】树链剖分](https://www.luogu.com.cn/problem/P3384)<br>[P2590 树的统计](https://www.luogu.com.cn/problem/P2590)<br>[P4114 Qtree1](https://www.luogu.com.cn/problem/P4114) |
| 11 | [树上启发式合并](https://oi-wiki.org/graph/dsu-on-tree/) | 保留重儿子信息，小集合合并到大集合优化子树统计。 | [CF600E Lomsat gelral](https://codeforces.com/problemset/problem/600/E)<br>[P4149 Race](https://www.luogu.com.cn/problem/P4149)<br>[P3899 谈笑风生](https://www.luogu.com.cn/problem/P3899) |
| 12 | [点分治](https://oi-wiki.org/graph/tree-divide/) | 以树重心递归拆分，统计树上路径问题。 | [P3806 【模板】点分治 1](https://www.luogu.com.cn/problem/P3806)<br>[P4178 Tree](https://www.luogu.com.cn/problem/P4178)<br>[P2634 聪聪可可](https://www.luogu.com.cn/problem/P2634) |
| 13 | [强连通分量](https://oi-wiki.org/graph/scc/) | Tarjan/Kosaraju 缩点，把有向图转为 DAG。 | [P3387 【模板】缩点](https://www.luogu.com.cn/problem/P3387)<br>[P2341 受欢迎的牛](https://www.luogu.com.cn/problem/P2341)<br>[P2863 The Cow Prom S](https://www.luogu.com.cn/problem/P2863) |
| 14 | [割点和桥](https://oi-wiki.org/graph/cut/) | 用 DFS 树 lowlink 判断删除点/边后连通性变化。 | [P3388 【模板】割点](https://www.luogu.com.cn/problem/P3388)<br>[P1656 炸铁路](https://www.luogu.com.cn/problem/P1656)<br>[P8436 【模板】边双连通分量](https://www.luogu.com.cn/problem/P8436) |
| 15 | [双连通分量](https://oi-wiki.org/graph/bcc/) | 点双/边双分解，处理无向图连通性结构。 | [P8436 【模板】边双连通分量](https://www.luogu.com.cn/problem/P8436)<br>[P8435 【模板】点双连通分量](https://www.luogu.com.cn/problem/P8435)<br>[P3225 矿场搭建](https://www.luogu.com.cn/problem/P3225) |
| 16 | [2-SAT](https://oi-wiki.org/graph/2-sat/) | 建蕴含图，SCC 判可行并构造解。 | [P4782 【模板】2-SAT](https://www.luogu.com.cn/problem/P4782)<br>[P4171 满汉全席](https://www.luogu.com.cn/problem/P4171)<br>[P3825 游戏](https://www.luogu.com.cn/problem/P3825) |
| 17 | [欧拉图](https://oi-wiki.org/graph/euler/) | 判断欧拉路/回路，Hierholzer 算法输出路径。 | [P7771 【模板】欧拉路径](https://www.luogu.com.cn/problem/P7771)<br>[P1341 无序字母对](https://www.luogu.com.cn/problem/P1341)<br>[P2731 Riding the Fences G](https://www.luogu.com.cn/problem/P2731) |
| 18 | [最大流](https://oi-wiki.org/graph/flow/max-flow/) | Dinic/ISAP 求源汇最大可行流，关键是层次图和增广。 | [P3376 【模板】网络最大流](https://www.luogu.com.cn/problem/P3376)<br>[P1343 地震逃生](https://www.luogu.com.cn/problem/P1343)<br>[P2765 魔术球问题](https://www.luogu.com.cn/problem/P2765) |
| 19 | [最小割](https://oi-wiki.org/graph/flow/min-cut/) | 最大流最小割定理，常用于二选一、闭合子图建模。 | [P1345 奶牛的电信](https://www.luogu.com.cn/problem/P1345)<br>[P2057 善意的投票](https://www.luogu.com.cn/problem/P2057)<br>[P2774 方格取数问题](https://www.luogu.com.cn/problem/P2774) |
| 20 | [费用流](https://oi-wiki.org/graph/flow/min-cost/) | 在流量约束下最小化费用，常用 SPFA/Dijkstra 增广。 | [P3381 【模板】最小费用最大流](https://www.luogu.com.cn/problem/P3381)<br>[P4016 负载平衡问题](https://www.luogu.com.cn/problem/P4016)<br>[P2053 修车](https://www.luogu.com.cn/problem/P2053) |
| 21 | [二分图最大匹配](https://oi-wiki.org/graph/graph-matching/bigraph-match/) | 匈牙利算法或 Dinic 建模，求最大匹配和最小点覆盖。 | [P3386 【模板】二分图最大匹配](https://www.luogu.com.cn/problem/P3386)<br>[P1129 矩阵游戏](https://www.luogu.com.cn/problem/P1129)<br>[P2756 飞行员配对方案问题](https://www.luogu.com.cn/problem/P2756) |
| 22 | [二分图最大权匹配](https://oi-wiki.org/graph/graph-matching/bigraph-weight-match/) | KM 算法求完备二分图最大权匹配。 | [P6577 【模板】二分图最大权完美匹配](https://www.luogu.com.cn/problem/P6577)<br>[P1559 运动员最佳匹配问题](https://www.luogu.com.cn/problem/P1559)<br>[P4014 分配问题](https://www.luogu.com.cn/problem/P4014) |
| 23 | [矩阵树定理](https://oi-wiki.org/graph/matrix-tree/) | 用拉普拉斯矩阵任一代数余子式求生成树计数。 | [P6178 【模板】Matrix-Tree 定理](https://www.luogu.com.cn/problem/P6178)<br>[P4111 HEOI2015 小 Z 的房间](https://www.luogu.com.cn/problem/P4111)<br>[P3317 SDOI2014 重建](https://www.luogu.com.cn/problem/P3317) |

## 计算几何

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [二维计算几何基础](https://oi-wiki.org/geometry/2d/) | 点、向量、叉积、点积、直线与线段关系。 | [P1652 圆](https://www.luogu.com.cn/problem/P1652)<br>[P1142 轰炸](https://www.luogu.com.cn/problem/P1142)<br>[P2742 【模板】二维凸包](https://www.luogu.com.cn/problem/P2742) |
| 2 | [距离](https://oi-wiki.org/geometry/distance/) | 点到点、点到线、点到线段距离，注意投影位置。 | [P1142 轰炸](https://www.luogu.com.cn/problem/P1142)<br>[P1429 平面最近点对](https://www.luogu.com.cn/problem/P1429)<br>[P1652 圆](https://www.luogu.com.cn/problem/P1652) |
| 3 | [Pick 定理](https://oi-wiki.org/geometry/pick/) | 格点多边形面积与边界点、内部点关系。 | [P2735 电网 Electric Fences](https://www.luogu.com.cn/problem/P2735)<br>[P2742 【模板】二维凸包](https://www.luogu.com.cn/problem/P2742)<br>[P2287 消失之物](https://www.luogu.com.cn/problem/P2287) |
| 4 | [凸包](https://oi-wiki.org/geometry/convex-hull/) | Graham/Andrew 求最小凸多边形，注意共线点处理。 | [P2742 【模板】二维凸包](https://www.luogu.com.cn/problem/P2742)<br>[P1452 Beauty Contest](https://www.luogu.com.cn/problem/P1452)<br>[P3829 信用卡凸包](https://www.luogu.com.cn/problem/P3829) |
| 5 | [扫描线](https://oi-wiki.org/geometry/scanning/) | 将二维问题按事件排序转为一维动态维护。 | [P5490 【模板】扫描线](https://www.luogu.com.cn/problem/P5490)<br>[P1856 Picture](https://www.luogu.com.cn/problem/P1856)<br>[P1502 窗口的星星](https://www.luogu.com.cn/problem/P1502) |
| 6 | [旋转卡壳](https://oi-wiki.org/geometry/rotating-calipers/) | 在凸包上维护对踵点，求直径、最小矩形等。 | [P1452 Beauty Contest](https://www.luogu.com.cn/problem/P1452)<br>[P3187 最小矩形覆盖](https://www.luogu.com.cn/problem/P3187)<br>[P2742 【模板】二维凸包](https://www.luogu.com.cn/problem/P2742) |
| 7 | [半平面交](https://oi-wiki.org/geometry/half-plane/) | 求若干半平面的公共区域，按极角排序并用双端队列维护。 | [P4196 【模板】半平面交](https://www.luogu.com.cn/problem/P4196)<br>[P3256 奇怪的餐厅](https://www.luogu.com.cn/problem/P3256)<br>[P2742 【模板】二维凸包](https://www.luogu.com.cn/problem/P2742) |
| 8 | [平面最近点对](https://oi-wiki.org/geometry/nearest-points/) | 分治或扫描线求最近点距离，复杂度 `O(n log n)`。 | [P1429 平面最近点对](https://www.luogu.com.cn/problem/P1429)<br>[P7883 平面最近点对加强版](https://www.luogu.com.cn/problem/P7883)<br>[P1257 平面上的最接近点对](https://www.luogu.com.cn/problem/P1257) |

## 杂项与专题

| 序号 | 知识点 | 关键点说明 | 例题 |
|---:|---|---|---|
| 1 | [离散化](https://oi-wiki.org/misc/discrete/) | 将大值域映射到连续小下标，保留大小/相等关系。 | [P1955 程序自动分析](https://www.luogu.com.cn/problem/P1955)<br>[P1496 火烧赤壁](https://www.luogu.com.cn/problem/P1496)<br>[P1059 明明的随机数](https://www.luogu.com.cn/problem/P1059) |
| 2 | [双指针](https://oi-wiki.org/misc/two-pointer/) | 维护左右端点单调移动，常用于区间、尺取、去重。 | [P1102 A-B 数对](https://www.luogu.com.cn/problem/P1102)<br>[P1638 逛画展](https://www.luogu.com.cn/problem/P1638)<br>[P1147 连续自然数和](https://www.luogu.com.cn/problem/P1147) |
| 3 | [CDQ 分治](https://oi-wiki.org/misc/cdq-divide/) | 按时间/维度分治处理偏序或带修改统计。 | [P3810 【模板】三维偏序](https://www.luogu.com.cn/problem/P3810)<br>[P4169 Vani 有约会](https://www.luogu.com.cn/problem/P4169)<br>[P3157 动态逆序对](https://www.luogu.com.cn/problem/P3157) |
| 4 | [整体二分](https://oi-wiki.org/misc/parallel-binsearch/) | 对多询问答案一起二分，按贡献可撤销/可重放处理。 | [P3834 【模板】可持久化线段树 2](https://www.luogu.com.cn/problem/P3834)<br>[P1527 矩阵乘法](https://www.luogu.com.cn/problem/P1527)<br>[P2617 Dynamic Rankings](https://www.luogu.com.cn/problem/P2617) |
| 5 | [普通莫队](https://oi-wiki.org/misc/mo-algo/) | 离线排序询问，通过移动左右端点维护答案。 | [P3901 数列找不同](https://www.luogu.com.cn/problem/P3901)<br>[P1494 小 Z 的袜子](https://www.luogu.com.cn/problem/P1494)<br>[P2709 小 B 的询问](https://www.luogu.com.cn/problem/P2709) |
| 6 | [带修改莫队](https://oi-wiki.org/misc/modifiable-mo-algo/) | 在普通莫队基础上增加时间维，支持离线修改。 | [P1903 数颜色](https://www.luogu.com.cn/problem/P1903)<br>[P2617 Dynamic Rankings](https://www.luogu.com.cn/problem/P2617)<br>[P3939 数颜色](https://www.luogu.com.cn/problem/P3939) |
| 7 | [树上莫队](https://oi-wiki.org/misc/mo-algo-on-tree/) | 将树上路径转为欧拉序区间，配合 LCA 修正。 | [P4074 糖果公园](https://www.luogu.com.cn/problem/P4074)<br>[P4556 雨天的尾巴](https://www.luogu.com.cn/problem/P4556)<br>[P3709 大爷的字符串题](https://www.luogu.com.cn/problem/P3709) |
| 8 | [分数规划](https://oi-wiki.org/misc/frac-programming/) | 二分答案，将比值优化转化为线性判定。 | [P4377 Talent Show](https://www.luogu.com.cn/problem/P4377)<br>[P3199 骑士共存问题](https://www.luogu.com.cn/problem/P3199)<br>[P2868 Sightseeing Cows G](https://www.luogu.com.cn/problem/P2868) |
| 9 | [随机化技巧](https://oi-wiki.org/misc/rand-technique/) | 随机排列、随机权值、哈希降低构造性对抗。 | [P3792 由乃与大母神原型和偶像崇拜](https://www.luogu.com.cn/problem/P3792)<br>[P2420 让我们异或吧](https://www.luogu.com.cn/problem/P2420)<br>[P3370 【模板】字符串哈希](https://www.luogu.com.cn/problem/P3370) |
| 10 | [模拟退火](https://oi-wiki.org/misc/simulated-annealing/) | 随机搜索近似最优解，适合连续空间或难以精确优化的问题。 | [P1337 平衡点](https://www.luogu.com.cn/problem/P1337)<br>[P2538 城堡](https://www.luogu.com.cn/problem/P2538)<br>[P3878 分金币](https://www.luogu.com.cn/problem/P3878) |
| 11 | [表达式求值](https://oi-wiki.org/misc/expression/) | 用栈处理中缀表达式优先级，或转后缀表达式求值。 | [P1175 表达式的转换](https://www.luogu.com.cn/problem/P1175)<br>[P1449 后缀表达式](https://www.luogu.com.cn/problem/P1449)<br>[P1981 表达式求值](https://www.luogu.com.cn/problem/P1981) |
| 12 | [约瑟夫问题](https://oi-wiki.org/misc/josephus/) | 递推幸存者编号，关注 0/1 下标转换。 | [P1996 约瑟夫问题](https://www.luogu.com.cn/problem/P1996)<br>[P1145 约瑟夫](https://www.luogu.com.cn/problem/P1145)<br>[P8671 约瑟夫问题](https://www.luogu.com.cn/problem/P8671) |
| 13 | [RMQ 专题](https://oi-wiki.org/topic/rmq/) | 区间最值查询可用 ST 表、线段树、笛卡尔树等实现。 | [P3865 【模板】ST 表](https://www.luogu.com.cn/problem/P3865)<br>[P2880 Balanced Lineup G](https://www.luogu.com.cn/problem/P2880)<br>[P1816 忠诚](https://www.luogu.com.cn/problem/P1816) |
| 14 | [并查集应用](https://oi-wiki.org/topic/dsu-app/) | 扩展域、带权并查集、离线合并处理关系约束。 | [P2024 食物链](https://www.luogu.com.cn/problem/P2024)<br>[P1196 银河英雄传说](https://www.luogu.com.cn/problem/P1196)<br>[P1955 程序自动分析](https://www.luogu.com.cn/problem/P1955) |
| 15 | [括号序列](https://oi-wiki.org/topic/bracket/) | 合法括号序列、栈匹配、区间 DP 和 Catalan 计数。 | [P5658 括号树](https://www.luogu.com.cn/problem/P5658)<br>[P1739 表达式括号匹配](https://www.luogu.com.cn/problem/P1739)<br>[P1044 栈](https://www.luogu.com.cn/problem/P1044) |
