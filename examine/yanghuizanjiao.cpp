#include <iostream>
using namespace std;
int a[100]={0};

int main()
{
    int n;
    cin>>n;
    a[0]=1;
    cout<<1<<endl;
    for (int i = 1; i < n ; i++){
        int k=0;
        for (int j = 0; j < i+1; j++){
            int t=k+a[j];
            cout<<t<<' ';
            k=a[j];
            a[j]=t;
        }
        
        cout<<endl;
    }
    return 0;
}