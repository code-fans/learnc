#include <iostream>
using namespace std;
struct ntree{
    int l;
    int d;
    int r;
} a[10000];

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
        int j=1;
        while(true){
            if(b>a[j].d){ // >=
                if(a[j].r == -1){
                    a[j].r=i;
                    break;
                }
                j = a[j].r;
            } else {
                if(a[j].l == -1){
                    a[j].l=i;
                    break;
                }
                j = a[j].l;
            }
        } 
    }

    for (int i = 1; i <= n; i++){
        cout<<a[i].l<<' '<<a[i].d<<' '<<a[i].r<<endl;
    }
    return 0;
}
/*
9
6 3 8 5 2 9 4 7 10
*/