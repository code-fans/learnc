#include <iostream>
#include <string>
using namespace std;
/* int main()
{
    char str[20];
    cin>>str;
    cout<<str<<endl;
    return 0;
}
#include <iostream>
using namespace std;
*/

int main()
{
    string str;
    int i=0,ans=1;
    getline(cin, str);
    while (i<str.size())
    {
        if (i>0)
        {
            if (str[i]==32&&str[i-1]!=32)
            {
                ans++;
            }
            
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}