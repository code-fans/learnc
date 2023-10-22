#include<iostream>
using namespace std;

int main()
{
    int e=0,x=0,y=0;
    char a;
    cin >> a;
    while (a!='#')
    {
        if(a=='L'){
            e = (e+3) % 4;
        }
        if(a=='R')
        {
            e = (e+1) % 4;
        }
        switch (e)
        {
        case 0:
            x++;
            break;
        case 1:
            y--;
            break;
        case 2:
            x--;
            break;
        case 3:
            y++;
            break;
        default:
            break;
        }
        cin >> a;
    }
    cout <<"("<<x<<','<<y<<")"<<endl;
    char fx[]="ESWN";
    cout<<fx[e]<<endl;
    return 0;
}
