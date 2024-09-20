#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,a[100000],b[100000],km;
    cin>>n>>km;
    for (int i = 0; i < n-1; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    long long ans1=0,shang=0,chang=0,yf=b[0],bujian=0;
    for (int i = 1; i < n; i++){
        chang+=a[i-1];
        if(yf>b[i]){
            long long jjj=(chang+km-1-bujian)/km;
            ans1+=jjj*yf;
            bujian+=jjj*km;
            bujian-=chang;
            yf=b[i];
            chang=0;
            shang=i;
        }
    }
    std::nth_element()
    ans1+=(chang+km-1-bujian)/km*yf;
    cout<<ans1<<endl;
    return 0;
}