#include <iostream>
using namespace std;
struct h
{
    int bianhao;
    bool isout;
};
h a[1000000];
int main()
{
    int r,n,m,digi=0;
    cin>>n>>m;
    r=n;
    for (int i = 0; i < n; i++){
        a[i].bianhao=i+1;
        a[i].isout=false;
    }
    
    for (int i = 0; r!=1; i++){
        if(a[i].isout==false){
            digi++;
            if(digi==m){
                digi=0;
                a[i].isout=true;
                r--;
            }
        }
        if(i==n-1)
            i=-1;
    }

    for (int i = 0; i < n; i++){
        if(!a[i].isout){
            cout<<i+1<<endl;
            break;
        }
    }
    
    return 0;
}