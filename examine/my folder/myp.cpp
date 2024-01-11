#include <iostream>
using namespace std;

int mmm(int n){
    int ans=0;
    if (n/2==1||n==1){
        return 1;
    }
    for (int i = 1; i <= n/2; i++){
        ans+=i/2;
        mmm(i);
    }
    return ans-n/2;
}
int main()
{
    int n;
    cin>>n;
    cout<<mmm(n);
    return 0;
}