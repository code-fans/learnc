#include <iostream>
using namespace std;
struct ntree{
    int l;
    int d;
    int r;
} a[1000];

int main()
{
    int n, b;
    cin>>n;
    a[0].d=0;
    a[0].l=-1;
    a[0].r=-1;
    for (int i = 1; i <= n; i++){

        cin>>b;
        a[i].d=b;
        a[i].l=-1;
        a[i].r=-1;
        int j=0;
        while(true){
            if(b > a[j].d){ // >=
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

70
62 54 96 62 18 9 7 14 40 28 3 0 99 95 54 5 86 21 69 12 28 91 63 21 14 8 7 70 78 63 77 71 25 17 68 76 15 8 86 19 89 22 96 88 60 70 82 53 97 72 9 22 64 27 9 89 40 0 89 42 18 92 52 12 50 50 91 83 3 10 12 23

*/
//