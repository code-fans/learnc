#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct a{
    char zm;
    int id;
    int jc;
};
a m[26];
bool cmp(a c,a b){
    if (c.jc==b.jc){
        return c.id<b.id;
    }
    else{
        return c.jc<b.jc;
    }
}
int main(){
    string a;
    char ans;
    cin>>a;
    for (int i = 0; i < 26; i++){
        m[i].jc=0;
    }
    for (int i = 0; i < a.size(); i++){
        m[a[i]-'a'].jc++;
        m[a[i]-'a'].id=i;
        m[a[i]-'a'].zm=a[i];
    }
    sort(m,m+26,cmp);
    for(int i=0; i<26 ; i++){
        if (m[i].jc==1){
            cout<<m[i].zm<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
    return 0;
}