#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;
bool def(int a,int b){
    if(a>b)
        return 0;
    if(a==b)
        return 1;
    b--;
    if(b%2==0 && def(a, b/2)){
        return 1;
    }
    if(b%3==0 && def(a, b/3)){
        return 1;
    }
    return 0;
}

int main()
{
    int a,b;
    char ds;
    cin>>a>>ds>>b;
    if(def(a, b))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}