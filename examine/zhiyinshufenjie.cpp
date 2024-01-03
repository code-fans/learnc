#include <iostream>
using namespace std;
int main()
{
    int n, i=2;
    cin>>n;
    while(n!=1){
        while (n%i==0){
            cout<<i<<' ';
            n/=i;
        }
        i++;
    }
    cout<<endl;
    return 0;
}