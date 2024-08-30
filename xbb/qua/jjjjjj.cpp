#include <iostream>
#include <algorithm>
using namespace std;
int tree[100010];
int n, maxnode;
int a1[100010];
int a[100010];
void mtree(int pos, int node){
    tree[pos] = node;
    if(pos>maxnode){
        maxnode = pos;
    }
    bool left = true;
    for (int i = 1; i <= n; i++){
        if(node == a[i]){
            if(left){
                mtree(pos*2, i);
                left = false;
            }else{
                mtree(pos*2+1, i);
                break;
            }
        }
    }
}

void dfs(int jiedian){
    int i=tree[jiedian];  
    if(!i) return ;  
    a1[i]=!a1[i];
    dfs(jiedian*2);
    dfs(jiedian*2+1);
}

int main()
{
    cin>>n;
    
    for (int i = 2; i <= n; i++){
        cin>>a[i];
    } 
    
    maxnode=1;

    mtree(1,1);
    for (int i = 1; i <= n; i++){
        char sum;
        cin>>sum;
        a1[i]=sum-'0';
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++){
        int cha;
        cin>>cha;
        for (int j = 1; j <= maxnode; j++){
            if(tree[j]==cha){
                dfs(j);
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cout<<a1[i];
    }
    cout<<endl;
    return 0;
}
/*
6
3 1 1 3 4
100101
3
1
3
2
*/