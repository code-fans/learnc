#include <iostream>
#include <algorithm>
using namespace std;
int a[1100000],n,m;
int main()
{
    
    cin>>n;
    cin>>m;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<0<<endl;
    int min=10000;
    for (int i = 1; i < n; i++){
        min=1000000;
        for (int j = i-1; j >i-m-1&&j>=0; j--){
            if(min>a[j])
                min=a[j];
        }
        cout<<min<<endl;
    }
    return 0;
}