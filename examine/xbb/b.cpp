#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,n1;
    cin>>n>>n1;
    int a[109900];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int max;
    for (int i = 0; i < n-n1+1; i++){
        max=-100000;
        for (int j = i; j < i+n1; j++){
            if(max<a[j])
                max=a[j];
        }
        cout<<max;
    }
}