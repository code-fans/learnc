#include <iostream>
#include <string>
using namespace std;
struct TH
{
    string name;
    long long sum;
};
int main()
{
    TH a[2002];
    int l=0;
    int n;
    cin>>n;
    string name;
    for (int i = 0; i < n+n; i++)
    {
        cin>>name;
        bool found=false;
        for (int j = 0; j < l; j++)
        {
            if (a[j].name == name)
            {
                a[j].sum++;
                found=true;
            }
            
        }
        if (!found)
        {
            a[l].name=name;
            a[l].sum=1;
            l++;
        }   
    }
    int max=0;
    for (int i = 0; i < l; i++)
    {
        if (max<a[i].sum)
        {
            max=a[i].sum;
        }
        
    }
    cout<<max<<endl;
    return 0;
}