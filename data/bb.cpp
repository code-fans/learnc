#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct bb
{
   int bianhao;
   int y;
   int sh;
   int w;
   int zong;
   int mc;
};

int cmp(bb a, bb b){
    if (a.zong>b.zong){
        return 1;
    }
    if (a.zong<b.zong){
        return -1;
    }
    // 总分相等
    if (a.y+a.sh>b.sh+b.y){
        return 1;
    }
    if (a.y+a.sh<b.sh+b.y){
        return -1;
    }
    if(max(a.sh, a.y)>max(b.y, b.sh)){
        return 1;
    }
    if(max(a.sh, a.y)<max(b.y, b.sh)){
        return -1;
    }
    return 0;
}
bool cmp2(bb a,bb b){
    return cmp(a,b)==1; 
}
bool cmp1(bb a,bb b){
    return a.bianhao<b.bianhao;
}
bb c[1000];
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>c[i].y>>c[i].sh>>c[i].w;
        c[i].zong=c[i].y+c[i].sh+c[i].w;
        c[i].bianhao=i;
    }
    sort(c,c+n,cmp2);
    c[0].mc =1;
    for (int i = 1; i < n; i++){
        if(cmp(c[i],c[i-1])==0)
            c[i].mc=c[i-1].mc;
        else
            c[i].mc = i+1;
    }
    
    // sort(c,c+n,cmp1); O(n*logn)
    int mcs[1000];
    for (int i = 0; i < n; i++){
        mcs[c[i].bianhao]=c[i].mc;
    }
    
    for (int i = 0; i < n; i++){
        cout<<mcs[i]<<endl;
    }
    
    return 0;
}

/*
6
140 140 150 
140 149 140
148 141 140
141 148 140
145 145 139
0 0 0

*/