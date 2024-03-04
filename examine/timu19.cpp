#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k=1,ans=0;
    int n , i;
    cin >> n >> i;
    while(true){
        ans = k*n +i;
        bool flag=true;
        for(int j=1; j<n; j++){
            if(ans%(n-1)==0)
                ans = ans / (n-1) * n + i;
            else{
                flag=false;
                break;
            }
        }
        if(flag)
            break;
        k++;
    }
    cout << ans << ' ' << k << endl;
    return 0;
}