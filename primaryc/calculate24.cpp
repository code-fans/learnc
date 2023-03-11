#include <iostream>
#include <cmath>

using namespace std;
int calc24_four(float a, float b, float c, float d);

int calc_main(){
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


        calc24_four(a,b,c,d);
    }

    return 0;
}

bool equal24(float a){
    return fabs(a - 24) < 1e-5;
}

int calc24_two(float a, float b){
    //if(a*b==24||a/b==24||b/a==24||a-b==24||b-a==24||a+b==24)
    if(equal24(a+b)) { // fabs(a+b - 24)<1e-9
        cout<<a <<"+"<<b<<"=24"<< endl;
        return 1;
    }
    if(equal24(a-b)) {
        cout<<a <<"-"<<b<<"=24"<< endl;
        return 1;
    }
    if(equal24(b-a)) {
        cout<<b<<"-"<<a<<"=24"<< endl;
        return 1;
    }
    if(equal24(a*b)) {
        cout<<a <<"*"<<b<<"=24"<< endl;
        return 1;
    }
    if(b != 0.f && equal24(a/b)) {
        cout<<a <<"/"<<b<<"=24"<< endl;
        return 1;
    }
    if(a != 0.f && equal24(b/a)) {
        cout<<b <<"/"<<a <<"=24"<< endl;
        return 1;
    }
    return 0;
}

int calc24_three_1(float a, float b, float c){
    if(calc24_two(a+b, c)) {
        cout<<a <<"+"<<b<< "="<< a+b << endl;
        return 1;
    }

    if(calc24_two(a-b, c)) {
        cout<<a <<"-"<<b<< "="<< a-b<< endl;
        return 1;
    }

    if(calc24_two(b-a, c)) {
        cout<<b<<"-"<<a<< "="<< b-a << endl;
        return 1;
    }
    if(calc24_two(a*b, c)) {
        cout<<a <<"*"<<b<< "="<< a*b << endl;
        return 1;
    }

    if(b!=0 && calc24_two(a/b, c)) {
        cout<<a <<"/"<<b<< "="<< a/b << endl;
        return 1;
    }
    if(a!=0 && calc24_two(b/a, c)) {
        cout<<b <<"/"<<a<< "="<< b/a<< endl;
        return 1;
    }

    return 0;
}

int calc24_three(float a, float b, float c){
    if(calc24_three_1(a, b, c))
        return 1;

    if(calc24_three_1(a, c, b))
        return 1;

    if(calc24_three_1(b, c, a))
        return 1;

    return 0;
}

int calc24_four_1(float a, float b, float c, float d){
    if(calc24_three (a+b, c,d)) {
        cout<<a <<"+"<<b<< "="<< a+b << endl;
        return 1;
    }

    if(calc24_three(a-b, c,d)) {
        cout<<a <<"-"<<b<< "="<< a-b<< endl;
        return 1;
    }
    if(calc24_three(b-a, c,d)) {
        cout<<b<<"-"<<a<< "="<< b-a << endl;
        return 1;
    }
    if(calc24_three(a*b, c,d)) {
        cout<<a <<"*"<<b<< "="<< a*b << endl;
        return 1;
    }
    if(b!=0 && calc24_three(a/b, c, d)) {
        cout<<a <<"/"<<b<< "="<< a/b << endl;
        return 1;
    }
    if(a!=0 && calc24_three(b/a, c,d)) {
        cout<<b <<"/"<<a<< "="<< b/a<< endl;
        return 1;
    }

    return 0;
}

int calc24_four(float a, float b, float c, float d){
    if(calc24_four_1(a, b, c, d))
        return 1;

    if(calc24_four_1(a, c, b, d))
        return 1;

    if(calc24_four_1(a, d, b, c))
        return 1;

    if(calc24_four_1(b, c, a, d))
        return 1;

    if(calc24_four_1(b ,d ,a, c ))
        return 1;

    if(calc24_four_1(c, d, b, a))
        return 1;

    cout<<"此题无解!";
    return 0;
}
