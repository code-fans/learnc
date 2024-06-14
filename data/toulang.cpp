#include <iostream>
#include <algorithm>
using namespace std;
int a[1000001];
int main()
{
    int n,tianshu=0;
    cin>>n;
    for (int k = 0; k < n; k++){
        cin>>a[k];
    }
    sort(a,a+n);
    int i=0,j=0;
    while (j < n){
        while (j<n){
            if(a[j]>=i+1){
                tianshu++;
                j++;
                break;
            }
            j++;
        }
        i++;
    }
    cout<<tianshu<<endl;
    return 0;
}