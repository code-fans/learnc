#include <iostream>
#include <cstdio>

using namespace std;

struct timu4
{
    long long shuzi;
    int geshu;
};
int len=0;
timu4 a[11111];

bool notSearch(long long s){
    int b=0, e=len;
    while(b<e){
        int mid=(b+e)/2;
        if(a[mid].shuzi==s){
            a[mid].geshu++;
            return false;
        }
        if(a[mid].shuzi>s){
            e=mid;
        }
        else{
            b=mid+1;
        }
    }
    return true ;
}

void insert(long long s){
    int p=len;
    while (p>0 && s<a[p-1].shuzi){
        a[p]=a[p-1];
        p--;
    }
    a[p].shuzi=s;
    a[p].geshu=1;
    len++;
}

int main()
{
    long long a1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &a1);
        if(notSearch(a1))
            insert(a1);
    }
    for (int i = 0; i < len; i++){
        printf("%lld %d\n", a[i].shuzi, a[i].geshu);
    }
    return 0;
}