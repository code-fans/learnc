#include <iostream>
using namespace std;

/*long long getItem(){
    long long a=0;
    char c;

    cin.get(c);
    if(c=='+')
        return -1; 
    if(c=='-')
        return -2; 
    if(c=='+')
        return -1; 
    if(c=='+')
        return -1; 
    while(c >='0' && c <='9'){
        a = a*10 + (c-'0');
        cin.get(c);
    }
    return a;
}*/

int main()
{
    long long a[10000];
    long long len=0;
    char a1;
    while (cin.get(a1))
    {
        if(a1!=' ')
        {
            if (a1>='0'&&a1<='9')
            {
                a[len]*=10;
                a[len]+=a1-'0';
            }
            else
            {
                if (a1=='+'){
                    a[len-2]=a[len-1]+a[len-2];
                }
                if (a1=='-'){
                    a[len-2]=a[len-2]-a[len-1];
                }
                if (a1=='*'){
                    a[len-2]=a[len-2]*a[len-1];
                }
                if (a1=='/'){
                    a[len-2]=a[len-2]/a[len-1];
                }
                len --;
            }
        }
        else
            len++;
        if(a1=='@')
            break;
    }
    cout<<a[0];
}