#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;
int palouti(int a)
{
    if(a<=1)
        return 1;
    return palouti(a-1)+palouti(a-2);
}
int main()
{
    int a;
    while (cin>>a){
        cout<<palouti(a)<<endl;
    }
    return 0;
}