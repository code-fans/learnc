#include <iostream>
using namespace std;
int main()
{
    char a[10000],max[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int b,c,n;
    cin>>b>>c>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int coutc=0;
    while (coutc<5){
        a[n-1]++;
        int i=1;
        if(a[n-1]>max[c-1]){
            while (a[n-i]>max[c-i]){
                a[n-i-1]++;
                if(i==n)
                    break;
                i++;
            }
            if(i==n)
                break;
            while (i>=1){
                a[n-i+1]=a[n-i]+1;
                i--;
            }
        }
        for (i = 0; i < n; i++){
            cout<<a[i];
        }
        cout<<endl;
        coutc ++;
    }
    return 0;
}                    