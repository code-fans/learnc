#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[100000],b[100000],len=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k=-1111;
    for (int i = 0; i < n; i++){
        bool mmm=true;
        for (int j = 0; j < len; j++)
            if (b[j]==a[i])
                mmm=false;
        if(mmm){
            cout<<a[i]<<' ';
            b[len]=a[i];
            len++;
        }
    }
    cout<<endl;
    return 0;
}