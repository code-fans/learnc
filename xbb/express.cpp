#include <iostream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;


queue<string> express;

string charToStr(char a){
    string str(1, a);
    return str;
}

void trans(){
    stack<char> staCK;
    string ch;
    cin>>ch;
    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i]>='0' && ch[i]<='9')
        {
            string str = charToStr(ch[i]);
            while (i+1<ch.size()&&ch[i+1]>='0'&&ch[i+1]<='9')
            {
                str+=ch[++i];
            }
            express.push(str);
        }
         else if (ch[i]=='('){
            staCK.push(ch[i]);
            //stack[++top]=ch[i];
        }
        else if (ch[i]==')'){
            while (/*!staCK.empty() &&*/ staCK.top()!='('){
                express.push(charToStr(staCK.top()));
                staCK.pop();
            }
            staCK.pop();
        }
        else if (ch[i]=='+'||ch[i]=='-'){
            while (!staCK.empty() && staCK.top()!='('){
                express.push(charToStr(staCK.top()));
                staCK.pop();
            }
            staCK.push(ch[i]);
        }
        else if (ch[i]=='*'||ch[i]=='/'){

            while (!staCK.empty() && (staCK.top()=='*' || staCK.top()=='/')){
                express.push(charToStr(staCK.top()));
                staCK.pop();
            }
            staCK.push(ch[i]);
        }
    }
    while (!staCK.empty()){
        express.push(charToStr(staCK.top()));
        staCK.pop();
    }
}

double compvalue()
{
    stack<double> stk;
    while (!express.empty())
    {
        if (express.front()!="+" &&express.front() != "-" 
            &&express.front() !="*" && express.front()!="/"){
            double d =0.0;
            string data = express.front();
            for (int j = 0; j <data.size(); j++){
                d=10*d+ (data[j]-'0');
            }
            stk.push(d);
        }
        else{
            double a, b;
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();

            if(express.front()=="+")
                stk.push(a+b);
            else if(express.front()=="-")
                stk.push(a-b);
            else if(express.front()=="*")
                stk.push(a*b);
            else if(express.front()=="/")
                stk.push(a/b);
        }
        express.pop();
    }
    return stk.top();
}

int main()
{
    trans();
    ///putExp();
    printf("%0.2f\n",compvalue());
    return 0;
}