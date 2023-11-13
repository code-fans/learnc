#include <iostream>
using namespace std;
int add[10000]={0};
int main()
{
    int n, m, t,addmax=1,addmin=1,alladd=0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        for (int k = 0; k < m; k++){
            cin>>t;
            if (t==1){
                add[i]++;
                alladd++;
            }
        }
    for (int i = 1; i < n; i++){
        if (add[addmax-1]<add[i]){
            addmax=i+1;
        }
        if (add[addmin-1]>add[i]){
            addmin=i+1;
        }
    }
    cout<<alladd<<endl<<addmax<<endl<<addmin<<endl;
    return 0;
}