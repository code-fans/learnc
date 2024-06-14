#include <iostream>
#include <string>
#include <cmath>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int p1,p2,p3;
void putout(char b,char n){
    char b1,n1;
    int s;
    if(p3==1){
        b1 = b+1;
        n1 = n;
        s = 1;
    }else{
        b1= n-1;
        n1= b;
        s = -1;
    }
    for (char i = b1; i != n1; i+=s){      
        for (int j = 0; j < p2; j++){
            if(p1==1)
                cout<<i;
            if(p1==2){
                if(i>='a'&&i<='z')
                    cout<<char(i-32);
                else
                    cout<<i;
            }
            if(p1==3)
                cout<<'*';
        }
    }
    return ;
}
int main()
{
    cin>>p1>>p2>>p3;
    string x;
    cin>>x;
    for (int i = 0; i < x.size(); i++){
        if(i>0 && x[i]=='-' &&x[i-1]<x[i+1]&&(
                ( (islower(x[i-1]) && islower(x[i+1]))||
                  (isdigit(x[i-1]) && isdigit(x[i+1]))))){
            putout(x[i-1],x[i+1]);
        }
        else{
            cout<<x[i];
        }
    }
    cout<<endl;
    return 0;
}
