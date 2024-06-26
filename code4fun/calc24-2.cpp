#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int calc24_four(float a, float b, float c, float d);
string formula1, formula2;
int sum;

int main(){
    float a,b,c,d;

    while(1){
        cout<<"请输入四个不大于13的正整数，不符合要求将退出："<<endl;

        cin>>a;
        if(a<1 || a>13)
            break;
        cin>>b;
        if(b<1 || b>13)
            break;
        cin>>c;
        if(c<1 || c>13)
            break;
        cin>>d;
        if(d<1 || d>13)
            break;
        sum = 0;
        calc24_four(a,b,c,d);
    }

    return 0;
}

bool equal24(float a){
    return fabs(a - 24) < 1e-5;
}

string floatToString(float a){
    std::ostringstream oss;
    oss<<a;
    std::string str(oss.str());
    return str;
    /*
    if (fabs(a-(int)a)<1e-5)
        return to_string((int)a);
    else
        return to_string(a);*/
}

int calc24_two(float a, float b){
    //if(a*b==24||a/b==24||b/a==24||a-b==24||b-a==24||a+b==24)
    if(equal24(a+b)) { // fabs(a+b - 24)<1e-9
        cout<<formula1<<endl<<formula2<<endl;
        cout<<a <<"+"<<b<<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }

    if(equal24(a-b)) {
        cout<<formula1<<endl<<formula2<<endl;
        cout<<a <<"-"<<b<<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }

    if(equal24(b-a)) {
        cout<<formula1<<endl<<formula2<<endl;
        cout<<b<<"-"<<a<<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }

    if(equal24(a*b)) {
        cout<<formula1<<endl<<formula2<<endl;
        cout<<a <<"*"<<b<<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }

    if(b != 0.f && equal24(a/b)) {
        cout<<formula1<<endl<<formula2<<endl;
        cout<<a <<"/"<<b<<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }

    if(a != 0.f && equal24(b/a)) {
        cout<<formula1<<endl<<formula2<<endl;
        cout<<b <<"/"<<a <<"=24"<< endl;
        cout<<"---------------------"<< endl;
        sum++;
    }
    return 0;
}

int calc24_three_1(float a, float b, float c){
    formula2 = floatToString(a) + "+" + floatToString(b) + "=" + floatToString(a+b);
    calc24_two(a+b, c);

    formula2 = floatToString(a) + "-" + floatToString(b) + "=" + floatToString(a-b);
    calc24_two(a-b, c);
    if(a!=b){
        formula2 = floatToString(b) + "-" + floatToString(a) + "=" + floatToString(b-a);
        calc24_two(b-a, c);
    }
    formula2 = floatToString(a) + "*" + floatToString(b) + "=" + floatToString(a*b);
    calc24_two(a*b, c);

    if(b != 0){
        formula2 = floatToString(a) + "/" + floatToString(b) + "=" + floatToString(a/b);
        calc24_two(a/b, c);
    }
    if(a != 0 && a!=b){
        formula2 = floatToString(b) + "/" + floatToString(a) + "=" + floatToString(b/a);
        calc24_two(b/a, c);
    }
    return 0;
}

bool floatNotEqual(float a, float b){
    return fabs(a - b) > 1e-7;
}


int calc24_three(float a, float b, float c){
    calc24_three_1(a, b, c);

    if(floatNotEqual(c,b))
        calc24_three_1(a, c, b);

    if(floatNotEqual(b,a) &&  floatNotEqual(c,a))
        calc24_three_1(b, c, a);

    return 0;
}

int calc24_four_1(float a, float b, float c, float d){
    formula1 = floatToString(a) + "+" + floatToString(b) + "=" + floatToString(a+b);
    calc24_three (a+b, c,d);

    formula1 = floatToString(a) + "-" + floatToString(b) + "=" + floatToString(a-b);
    calc24_three(a-b, c,d);

    if(a!=b){
        formula1 = floatToString(b) + "-" + floatToString(a) + "=" + floatToString(b-a);
        calc24_three(b-a, c,d);
    }

    formula1 = floatToString(a) + "*" + floatToString(b) + "=" + floatToString(a*b);
    calc24_three(a*b, c,d);

    formula1 = floatToString(a) + "/" + floatToString(b) + "=" + floatToString(a/b);
    calc24_three(a/b, c, d);

    if(a!=b){
        formula1 = floatToString(b) + "/" + floatToString(a) + "=" + floatToString(b/a);
        calc24_three(b/a, c,d);
    }

    return 0;
}

int calc24_four(float a, float b, float c, float d){
    calc24_four_1(a, b, c, d);

    if(b!=c)
        calc24_four_1(a, c, b, d);

    if(c!=d && b!=d)
        calc24_four_1(a, d, b, c);

    if(a!=c && b!=a)
        calc24_four_1(b, c, a, d);

    if(d!=a && b!=a && c!=d)
        calc24_four_1(b ,d ,a, c);

    if(a!=c && b!=d && b!=d && d!=a)
        calc24_four_1(c, d, b, a);

    cout<<"一共有" << sum << "种解法!"<<endl;
    return 0;
}
