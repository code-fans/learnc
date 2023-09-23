#include<iostream>
using namespace std;

struct M
{
    char c;
    int num;
};

bool cmp(M a, M b)
{
    if (a.num == b.num)
        return a.c < b.c;
    else
        return a.num > b.num;
}

M b[26];

int main(){
    for (int i=0;i<26;i++){
        b[i].num=0;
        b[i].c = 'a' + i;
    }
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s.at(i)>='a'&& s.at(i)<='z'){
            b[s.at(i)-'a'].num++;
        }
    }
    sort(b, b+26, cmp);

    for (int i=0;i<26 && b[i].num>0;i++){
        cout<<b[i].c<<":"<<b[i].num<<endl;
    }
    return 0;
}