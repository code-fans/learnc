#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
char p[4]={'^','>','v','<'};
char a[10][10];
int x,y,fangxiang;
void moveUp(){
    if(x==0) return;
    int xU = x-1;
    while(xU>0 && a[xU][y] != '.') 
        xU--;
    while(xU < x-1){
        a[xU][y] = a[xU+1][y];
        xU++;
    }
    x--;
    a[x][y]='.';
}
void movedown(){
    if(x==7)return ;
    int xU=x+1;
    while (xU<7 && a[xU][y]!='.') xU++;
    while (xU > x+1){
        a[xU][y]=a[xU-1][y];
        xU--;
    }
    x++;
    a[x][y]='.';
}
void moveright(){
    if (y==7) return;
    int yU=y+1;
    while (yU<7&&a[x][yU]!='.') yU++;
    while (yU>y){
        a[x][yU]=a[x][yU-1];
        yU--;
    }
    y++;
    a[x][y]='.';
}
void moveleft(){
    if (y==0) return;
    int yU=y-1;
    while (yU>0&&a[x][yU]!='.') yU--;
    while (yU<y-1){
        a[x][yU]=a[x][yU+1];
        yU++;
    }
    y--;
    a[x][y]='.';
}
int main(){
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin>>a[i][j];
            if(a[i][j]=='^'){
                fangxiang=0;
                a[i][j] = '.';
                x=i;
                y=j;
            }
            if(a[i][j]=='>'){
                fangxiang=1;
                a[i][j] = '.';
                x=i;
                y=j;
            }
            if(a[i][j]=='v'){
                fangxiang=2;
                a[i][j] = '.';
                x=i;
                y=j;
            }
            if(a[i][j]=='<'){
                fangxiang=3;
                a[i][j] = '.';
                x=i;
                y=j;
            }
        }
    }、
    
    string str;
    cin>>str;
    while (str!="#"){
        if(str=="move"){
            int n1;
            cin>>n1;
            if (fangxiang==0){
                for(int i=0; i<n1; i++)
                    moveUp();
            }
            if (fangxiang==2){
                for(int i=0; i<n1; i++)
                    movedown();
            }
            if (fangxiang==1){
                for (int i = 1; i <= n1; i++){
                    moveright();
                }
            }
            if (fangxiang==3){
                for (int i = 1; i <= n1; i++){
                    moveleft();
                }
            }
        }
        if (str=="turn"){
            cin>>str;
            if (str=="right"){
                fangxiang=(fangxiang+1)%4;
            }
            if (str=="left"){
                fangxiang=(fangxiang+3)%4;
            }
            if(str=="back"){
               fangxiang=(fangxiang+2)%4;
            }
        }
        cin>>str;
    }
    a[x][y] = p[fangxiang];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}