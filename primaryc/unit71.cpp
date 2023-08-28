#include<iostream>
using namespace std;

void fun(int geshu)
{
    for (int i = 1; i < geshu; i++) {
        cout<<"*";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
        fun(i);
    return 0;
}