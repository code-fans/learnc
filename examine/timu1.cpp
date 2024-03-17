#include <iostream>
using namespace std;
char a[20][20];
int a1[128]={0};
int maxL = 0;
int row, column;
void search(int x, int y, int len){
    if(maxL<len)
        maxL=len;
    if(x!=0&& a1[a[x-1][y]]==0){
        a1[a[x-1][y]]=1;
        search(x-1,y, len+1);
        a1[a[x-1][y]]=0;
    }
    if(y!=0&& a1[a[x][y-1]]==0){
        a1[a[x][y-1]]=1;
        search(x,y-1, len+1);
        a1[a[x][y-1]]=0;
    }
    if(x!=row-1&&a1[a[x+1][y]]==0){
        a1[a[x+1][y]]=1;
        search(x+1,y, len+1);
        a1[a[x+1][y]]=0;
    }
    if(y!=column-1&& a1[a[x][y+1]]==0){
        a1[a[x][y+1]]=1;
        search(x,y+1, len+1);
        a1[a[x][y+1]]=0;
    }

}
int main(){

    cin>> row >> column;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cin>>a[i][j];
        }
    }
    a1[a[0][0]] = 1;
    search(0, 0, 1);
    cout<<maxL<< endl;
    return 0;
}