#include <iostream>
using namespace std;
struct tree
{
    int renshu;
    int left;
    int right;
    int zrs;
};

int s(tree a[],int i,int add){
    int zs=a[i].renshu*add;
    a[i].zrs=a[i].renshu;
    if(a[i].left!=0){
        zs+=s(a,a[i].left,add+1);
        a[i].zrs+=a[a[i].left].zrs;
    }
    if(a[i].right!=0){
        zs+=s(a,a[i].right,add+1);
        a[i].zrs+=a[a[i].right].zrs;
    }
    return zs;
}

tree n[1000];

int main()
{
    int a,ge,yo,zho;
    cin>>a;
    
    for(int i=1;i<=a;i++){
        cin>>ge>>zho>>yo;
        n[i].renshu=ge;
        n[i].left=zho;
        n[i].right=yo;
    }
    int juli= s(n, 1, 0);
    int renzhongshu=n[1].zrs;
    int jz=1;
    while (1){
        if(n[n[jz].left].zrs>renzhongshu/2){
            jz=n[jz].left;
            juli += renzhongshu - n[jz].zrs - n[jz].zrs;
        }
        else if(n[n[jz].right].zrs>renzhongshu/2){
            jz=n[jz].right;
            juli -= n[jz].zrs - renzhongshu + n[jz].zrs;
        }
        else{
            break;
        }
    }
    cout<<juli<<endl;
    
    return 0;
}