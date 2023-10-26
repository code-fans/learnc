#include <iostream>
using namespace std;
int pell(int n){
    if(n < 2)
        return 1+n;
        
    int fn1=1, fn2=2, fn,ans=0;
    for(int i = 2; i < n; i++)
    {
        fn = (fn1 + 2*fn2) % 32767;
        fn1 = fn2;
        fn2 = fn;
    }
    return fn;
}

int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin>>b;
        cout<<pell(b)<<endl;
    }  
    return 0; 
}