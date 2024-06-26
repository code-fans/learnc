#include <iostream>
using namespace std;
int a[1000]={0},b[1000]={0},ans=0;
int main()
{
    int x ,y,m;
    
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<y;i++){
        cin>>b[i];
    }
    if (x>y){
        cout<<"-1"<<endl;
        return 0;
    }
  
    sort(b, b+y);
    sort(a, a+x);
    //都放在第一个
    int i=0, j=0;
    while(i<x && j<y){
        //盒子必须比蛋糕大或者相等
        while(j<y && b[j]<a[i]) j++;
        if (j==y) break;
        ans += b[j];
        j++;
        i++;
    }
    //蛋糕没有装完
    if (i<x){
        cout<<"-1"<<endl;
        return 0;
    }

    cout<<ans<<endl;
    return 0;
}

/*
  for(int i=0; i<x; i++){
        int pos = -1;
        int min = 1000000000;
        for(int j=0; j<y; j++){
            if(b[j]>=a[i] && b[j]<min ){
                pos = j;
                min = b[j];
            }
        }
        if(pos<0){
            cout<<"-1"<<endl;
            return 0;
        }
        ans += b[pos];
        b[pos] = 0;
    }
*/