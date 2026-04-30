
#include <iostream>
#include <string>
#include <stack>

using namespace std; 
int main()
{
    int n,n1;
    stack<char> d;

    cin>>n>>n1;
    while (n!=0){
        int a=n%n1;
        if(a>=10){
            d.push(char('A'+(a-10)));
        }
        else{
            d.push(char(a+48));
        }
        n/=n1;
    }
    if(d.empty())
        cout<<0;
    while (!d.empty())
    {
        cout << d.top(); 
        d.pop();
    }
    cout<<endl;
    return 0;
}

