#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    freopen("pattern.in","r",stdin);
    freopen("pattern.out","w",stdout);
    cin>>n;
    if (n%8==1)
        cout<<n/8+1<<endl;
    else if (n%8==0)
        cout<<8<<endl;
    else 
        cout<<n%8<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}