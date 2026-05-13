#include <iostream>
#include <chrono>
using namespace std;

int pn[10000000];
bool isPrime[10000000];

// 判断 p 是否为素数（试除法）
// 只需枚举到 sqrt(p)：若 p 有因子 i，则必有另一个因子 p/i >= i，所以 i <= sqrt(p)
bool isPrimeNum(int p){
    if(p<2) return false;
    for(int i=2; i*i<=p; i++){  // i*i <= p 等价于 i <= sqrt(p)，避免浮点运算
        if(p % i ==0 )
            return false;
    }
    return true;
}

// 用已知素数表判断 p 是否为素数（比 isPrimeNum 更快）
// 只用已筛出的素数去试除，避免重复用合数试除
bool isPrimeNum2(int p){
    for(int i=0; i<n && pn[i]*pn[i]<=p; i++){
        if(p%pn[i]==0)
            return false;
    }
    return true;
}

// 简单筛（埃氏筛变体）：从 i+i 开始标记 i 的倍数为合数
// 缺点：同一个合数可能被多个素数重复标记（如 12 被 2 和 3 各标记一次）
void simpleFilter(int maxN, bool isPrint){
    memset(isPrime,1,sizeof(isPrime));  // 初始假设所有数都是素数
    for(int i=2; i*i<=maxN; i++){
        if(isPrime[i]){
            for(int j=i+i; j<=maxN; j+=i){  // 从 2i 开始，步长 i
                isPrime[j] = 0;
            }
        }
    }
    // 下面是打印素数和统计素数数量的过程，可以省略
    int pSum = 0;
    for(int i=2; i<=maxN; i++){
        if(isPrime[i]){
            if(isPrint){
                if(pSum%10==0)
                    cout<< endl;
                cout << i << ' ';
            }
            pSum ++;  
        }
    }
    cout << endl << "sum = " << pSum << endl;
}

// 用已知素数逐个试除筛选素数（边筛边用）
// 与 simpleFilter 不同：不用标记数组，直接用已找到的素数去试除每个候选数
void simple(int maxN, bool isPrint){
    pn[0] = 2;
    int pSum = 1;
    for(int i=3; i<=maxN; i++){
        bool isP = true;
        for(int j=0; pn[j]*pn[j]<=i; j++){
            if(i % pn[j]==0){
                isP = false;
                break;
            }
        }
        if(isP){
            pn[pSum++]=i;
        }
    }

    // 下面是打印素数和统计素数数量的过程，可以省略
    if(isPrint){
        for(int i=0; i<pSum; i++){
            if(i%10==0)
                cout<< endl;
            cout << pn[i] << ' ';
        }
    }
    cout << endl << "sum = " << pSum << endl;
}

// 标准埃拉托色尼筛法：从 i*i 开始标记，比 simpleFilter 少重复标记
// 原理：i*2, i*3, ..., i*(i-1) 已经被更小的素数标记过，从 i*i 开始才是新的
void eratosthenes(int maxN, bool isPrint){
    memset(isPrime,1,sizeof(isPrime));
    for(int i=2; i*i<=maxN; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=maxN; j+=i){  // 从 i² 开始，避免重复标记
                isPrime[j] = 0;
            }
        }
    }
    // 下面是打印素数和统计素数数量的过程，可以省略
    int pSum = 0;
    for(int i=2; i<=maxN; i++){
        if(isPrime[i]){
            if(isPrint){
                if(pSum%10==0)
                    cout<< endl;
                cout << i << ' ';
            }
            pSum ++;
            
        }
    }
    cout << endl << "sum = " << pSum << endl;
}

// 欧拉线性筛：每个合数只被其最小质因子标记一次，时间复杂度严格 O(n)
// isPrime 在此函数中含义相反：1 表示合数，0 表示素数（初始化为全 0 即全素数）
void euler(int maxN, bool isPrint){
    memset(isPrime, 0, sizeof(isPrime));
    int pSum = 0;
    for(int i=2;i<=maxN;i++){
		if(!isPrime[i]) pn[pSum++]=i;  // i 未被标记，是素数，加入素数表
		for(int j=0; j<pSum && i * pn[j]<=maxN; j++){
			isPrime[i*pn[j]]=1;  // 用当前素数 pn[j] 标记合数 i*pn[j]
			if(i%pn[j]==0)break;  // pn[j] 是 i 的最小质因子，停止，保证每个合数只被标记一次
		}
	}
    // 下面是打印素数和统计素数数量的过程，可以省略
    if(isPrint){
        for(int i=0; i<pSum; i++){
            if(i%10==0)
                cout<< endl;
            cout << pn[i] << ' ';
        }
    }
    cout << endl << "sum = " << pSum << endl;
}


int main(){
    int n = 5000000;

    auto start = std::chrono::high_resolution_clock::now();
    simpleFilter(n, false);
    auto finish = std::chrono::high_resolution_clock::now();
     // 计算持续时间
    std::chrono::duration<double> elapsed = finish - start;
     // 输出运行时间
    std::cout << "simple filter time: " << elapsed.count() << "s\n";

    start = std::chrono::high_resolution_clock::now();
    eratosthenes(n, false);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "eratosthenes filter time: " << elapsed.count() << "s\n";

    start = std::chrono::high_resolution_clock::now();
    euler(n, false);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "euler filter time: " << elapsed.count() << "s\n";

    start = std::chrono::high_resolution_clock::now();
    simple(n, false);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "simple time: " << elapsed.count() << "s\n";

    return 0;
}
