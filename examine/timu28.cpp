#include <iostream>
#include <string>
using namespace std;
int main()
{
    int s;
    string str;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        long long ans=0;
        cin>>s;
        cin>>str;
        for (int j = 0; j < str.size(); j++){
            if(str[j]>'9')
                ans=ans * s + (str[j]-'A'+10);
            else
                ans= ans * s + (str[j]-'0');
        }
        cout<<ans<<endl;
    }
    return 0;
}