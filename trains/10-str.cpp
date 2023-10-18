#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.size();
    int ans=1,sum=1;

    for (int i = 1; i < len; i++)
    {
        if (str[i]>str[i-1])
        {
            sum++;
        }
        else
        {
            sum=1;
        }
        if (ans<sum)
        {
            ans=sum;
        }
    }
 
    
    cout<<ans<<endl;
    return 0;
}