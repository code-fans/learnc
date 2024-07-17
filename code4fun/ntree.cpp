#include <iostream>
using namespace std;
struct ntree{
    int l;
    int d;
    int r;
}a[10000],di;

int main()
{
    int n;
    cin>>n;
    int b;
    cin>>b;
    a[1].d=b;
    a[1].l=-1;
    a[1].r=-1;
    for (int i = 2; i <= n; i++){
       
        cin>>b;
        a[i].d=b;
        a[i].l=-1;
        a[i].r=-1;

        int j=1,di;
        if(a[j].d<b)
            di=2;
        else
            di=0;
        while ((a[j].r!=-1&&di==2)||(a[j].l!=-1&&di==0)){
            if(b>a[j].d)
                j = a[j].r;
            else
                j = a[j].l; 
            if(b>=a[j].d){
                di=2;
            }
            else{
                di=0;
            }
        }
        if(b>a[j].d)
            a[j].r=i;
        else
            a[j].l=i;
    }

    for (int i = 1; i <= n; i++){
        cout<<a[i].l<<' '<<a[i].d<<' '<<a[i].r<<' ';
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}
/*
9
6 3 8 5 2 9 4 7 10
*/