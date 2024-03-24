#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string a[32100];
    int len=0;

    while (cin>>a[len])
        len++;
    sort(a, a+len);
    int ans=1+a[0].size(),add=0;
    for (int i = 1; i < len; i++){
        add=0;
        for (int j = 0; j < min(a[i-1].size(),a[i].size()); j++){
            if(a[i-1][j]==a[i][j])
                add++;
            else
                break;
        }
        ans+=a[i].size()-add;
    }
    cout<<ans<<endl;
    return 0;
}