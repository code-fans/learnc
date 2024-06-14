#include <iostream>
#include <algorithm>
using namespace std;
struct dd
{
    int c;
    int x;
    int y;
    int bianhao;
    int l;
    int r;
};

dd bb[10000];

bool cmp(dd a,dd b){
    return a.c<b.c;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>bb[i].c>>bb[i].x>>bb[i].y;
        bb[i].bianhao=i+1;
    }
    for (int i = 0; i < n; i++){
        if(i==0)
            cout<<0<<' '<<0;
        else {
            for (int j = i-1; j >= 0; j--){
                if (bb[j].x<bb[i].x && bb[j].y>=bb[i].x){
                    cout<<j+1<<' ';
                    break;
                }
                if(j==0)
                    cout<<0<<' ';
            }
            for (int j = i-1; j >= 0; j--){
                if (bb[j].y>bb[i].y&&bb[j].x<=bb[i].y){
                    cout<<j+1<<' ';
                    break;
                }
                if(j==0)
                    cout<<0<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}