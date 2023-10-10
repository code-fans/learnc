#include<iostream>
using namespace std;
int main()
{
    char m;
    string isbm;
    
    cin>>isbm;
    int n=0,j=0;
    for(int i=0; i<12; i++)
    {
        if(isbm[i]!='-'){
            n+=(isbm[i]-'0')*(++j);
        }
    }
    n %= 11;
    m = n==10? 'X': n+'0';
    if(m == isbm[12])
        cout<<"Right"<<endl;
    else
    {
        isbm[12] = m;
        cout<<isbm<<endl;
    }
    return 0;
}