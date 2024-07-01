#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string express[100];
int t,top;
void putExp()
{
    for (int i = 0; i < t; i++){
        cout<<express[i]<<" ";
    }
    cout<<endl;
}
void trans(){
    char stack[100];
    string ch;
    cin>>ch;
    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i]>='0' && ch[i]<='9')
        {
            express[++t]=ch[i];
            while (i+1<ch.size()&&ch[i+1]>='0'&&ch[i+1]<='9')
            {
                express[t]+=ch[++i];
            }
        }
         else if (ch[i]=='('){
            stack[++top]=ch[i];
        }
        else if (ch[i]==')'){
            for (;top!=0&&stack[top]=='(' ; top--){
                express[++t]=stack[top];
            }
            stack[++top]=ch[i];
        }
        else if (ch[i]=='*'||ch[i]=='/'){
            for (;ch[i]=='*'||stack[top]=='/'; top--){
                express[++t]=stack[top];
            }
            stack[++top]=ch[i];
        }
        for (;top!=0; top--){
            express[++t]=stack[top];
        }
    }
}
double compvalue()
{
    double stk[100];
    top=0;
    for (int i = 1; i <= t; i++)
    {
        if (express[i] !="+" &&express[i] != "-" &&express[i] !="*" && express[i]!="/"){
            double d =0.0;
            for (int j = 0; j < express[i].size(); j++){
                d=10*d+ (express[i][j]-'0');
            }
            stk[++top]=d;
        }
        else{
            if(express[i]=="+")
                stk[top-1]=stk[top-1]+stk[top];
            else if(express[i]=="-")
                stk[top-1]=stk[top-1]-stk[top];
            else if(express[i]=="*")
                stk[top-1]=stk[top-1]*stk[top];
            else if(express[i]=="/")
                stk[top-1]=stk[top-1]/stk[top];
            top--;
        }
    }
    return stk[top];
}
//2*3/(2-1)+3*(4-1)
int main()
{
    trans();
    putExp();
    printf("%0.2f\n",compvalue());
    return 0;
}