#include <iostream>
using namespace std;
struct kee{
    long long s2;
    long long s3;
};
long long a[1000001];
kee aa[100001];
int main()
{
    long long n,m;
    cin>>n>>m;
    
    for (long long i = 0; i < n; i++){
        cin>>a[i];
    }
    long long size=0;
    for (long long i = 0; i < m; i++){
        long long zuongle,b;
        cin>>zuongle;
        if(zuongle==2){
            cin>>b;
            long long a1=a[b-1];
            if(size)
                for (long long j = 0; j < size; j++){
                    if(b % aa[j].s2==0)
                        a1 +=aa[j].s3;
                }
            cout<<a1<<endl;
        }
        else{
            cin>>aa[size].s2>>aa[size].s3;
            size++;
        }
    }
    return 0;
}