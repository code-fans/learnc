#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    for (int i = 0; i < n; i++){
        cin>>a;
        int k=0;
        int a1;
        a1=a;
        for (int j = 2; j*j <= a1; j++){
            bool g=false;
            while (a1%j==0){
                a1/=j;
                g=true;
            }
            if(g)
                k++;
        }
        if(a1>1)
            k++;
        if(k==2)
            cout<<1;
        else
            cout<<0;
        cout<<endl;
    }
    return 0;
}