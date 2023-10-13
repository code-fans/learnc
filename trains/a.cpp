#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

bool isHuiWenShu(int digit[], int len){
    for(int i=0; i<len/2; i++){
        if(digit[i] != digit[len-1-i])
            return false;
    }
    return true;
}

int main()
{
    string str;
    int jz;
    cin>>jz >> str;
    int digit[100]={0};
    int len = str.size();

    for(int i=0; i<len; i++){
        char c = str[i];
        if(c>='0'&&c<='9'){
            digit[i] = c-'0';
        } else if(c>='A'&&c<='Z'){
            digit[i] = c-'A'+10;
        } else if(c>='a'&&c<='z'){
            digit[i] = c - 'a' + 10;
        } 
    }

    int step = 0;
    while(!isHuiWenShu(digit, len)){
        if(step>30){
            break;
        }
        step++;
        for(int i=0; i<len/2+len%2; i++){
            int n = digit[i] + digit[len-1-i];
            digit[i] = n;
            digit[len-1-i] = n;
        }
        int jw=0;
        for(int i=0; i<len; i++){
            jw = jw + digit[i];
            digit[i] = jw % jz;
            jw =jw / jz;
        }
        if(jw>0){
            digit[len] = jw;
            len ++;
        }

    }
     if(step>30){
        cout << "Impossible!" << endl;
    } else{
        cout <<"STEP=" <<step << endl;
    }
}