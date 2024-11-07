#include <iostream>
#include <cmath>
using namespace std;
int n;
int f(int c, int step){
    if(step==1){
        if(c==2 || c==n)
            return 1;
        return 0;
    }

    return f((c-2+n)%n+1, step-1) + f((c%n)+1, step-1);
}

int main()
{
    int m;
    cin>>n>>m;
    int ans=f(1 ,m);
    cout<<ans<<endl;
    return 0;
}