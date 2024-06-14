#include <iostream>
#include <iomanip>
using namespace std;
int n,st,sp;
char c[101];
void print()
{
    int i;
    cout<<"step"<<setw(2)<<st<<':';
    for (int i = 0; i < 2*n+2; i++) cout<<c[i];
    cout<<endl;
    st++;
}
void init(int n)
{
    int i;
    st=0;
    sp=2*n;

    for (i=0;i<n;i++) c[i]='o';
    for (i = n; i<2*n; i++) c[i]='*';
    c[2*n]='-';
    c[2*n+1]='-';
    print();
}

void move(int k)
{
    int i;
    for (i = 0; i < 2; i++){
        c[sp+i]=c[k+i];
        c[k+i]='-';
    }
    sp=k;
    print();
}

void mv(int n)
{
    int i,k;
    if(n==4){
        move(3);
        move(7);
        move(1);
        move(6);
        move(0);
    }
    else{
        move(n-1);
        move(2*n-2);
        mv(n-1);
    }
}
int main()
{
    cin>>n;
    init(n);
    mv(n);
    return 0;
}