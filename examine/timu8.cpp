#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int  pos= 0;
int n, a, shu[1000000];
void shift( ){
    int n = pos + a;
    pos = n;
    for(int i = 0; i<a; i++){
        int p = shu[n-i-1];
        int j = pos;
        if(p>0){
            while(shu[j]>p){
                shu[j-1] = shu[j];
            }
            shu[j-1]=p;
            pos --;
        }
    }
}

int main(){
    srand(0);
    cout <<rand()<<' ' << rand() << endl;
    return 0;
}