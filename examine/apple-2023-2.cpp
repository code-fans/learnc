#include <iostream>
#include <algorithm>
#include <string>
int a[100000000];
using namespace std;
int main()
{
    long long n,b;
    cin>>n;
    cin>>b;
    int c=n;
    for (int i = 0; i < b-1; i++){
        n*=c;
    }
    cout<<n<<endl;
    return 0;
}