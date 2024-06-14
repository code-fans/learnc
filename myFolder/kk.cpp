#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n,a[101000];
    cin>>n;
    for (int i = 0; i < n; i++){
        scanf("%d",a+i);
    }
    sort(a,a+n);
    int s;
    cin>>s; 
    int j=n-1;
    int i = 0;
    while( i < j){
        if(a[i]+a[j]==s){
            cout<<a[i]<<' '<<a[j]<<endl;
            return 0;
        }
        if(a[i]+a[j]<s){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"No"<<endl;
    return 0;
}