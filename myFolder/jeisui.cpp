#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a,b[10000];
    cin>>n>>a;
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    int c[100000],size=0,min=0;
    int ans=0;
    for (int i = 0; i < a; i++){
        c[size]=b[i];
        size++;
    }
    int i=0;
    while (i<n-a){
        int mini=0;
        for (int j = 0; j < size; j++){
            if(c[j]<c[mini])
                mini=j;
        }
        c[mini]+=b[a+i];
        i++;
    }
    int maxi=0;
    for (int j = 0; j < size; j++){
        if(c[j]>c[maxi])
            maxi=j;
    }
    cout<<c[maxi]<<endl;
    return 0;
}