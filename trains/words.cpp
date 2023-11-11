#include <iostream>
#include <string>
using namespace std;
int main()
{
    freopen("a.in","r",stdin);
    freopen("words.out","w",stdout);
    string str[1000];
    int ans=0;
    while(cin>>str[ans]){
        ans++;
    }   
    sort(str,str+ans, greater<string>() );
    cout<<ans<<endl;
    for (int i = 0; i < ans; i++)
    {
        cout<<str[ans-1-i]<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}