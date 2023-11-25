#include <iostream>
#include <cstdio>
using namespace std;

void hanoi (int n, char f, char m, char t){
    if (n==1) 
        printf("%c->%d->%c\n",f,n,t);
    else{
        hanoi (n-1, f, t, m);
        printf("%c->%d->%c\n",f,n,t);
        hanoi(n-1, m, f, t);
    }
}

int main(){
    int n;
    char a,b,c;
    string str="";
    cin>>n>>a>>b>>c;
    hanoi(n, a, c, b);
    return 0;
}