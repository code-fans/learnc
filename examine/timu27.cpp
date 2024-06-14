#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct p{
    int s;
    int geshu;
};
int pic[25][26];
bool cmp(p a,p b){
    if(a.geshu!=b.geshu)
        return a.geshu>b.geshu;
    else
        return a.s<b.s;
}
p a[300];

int to10jz(char a, char b){
    return (a>='A'? 10+a-'A': a-'0') * 16 + (b>='A'? 10+b-'A': b-'0') ;
}

void cout1hex(int a){
    if(a>=10)
        cout << char('A'+a-10);
    else 
        cout << a;
}

void cout2hex(int a){
    cout1hex(a/16);
    cout1hex(a%16);
}

int main(){
    for(int i=0; i<256; i++){
        a[i].geshu=0;
        a[i].s=i;
    }
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++){
        cin>>s;
        pic[i][0] =  s.size()/2;    
        for (int j = 0; j < s.size()/2; j++){
            int shijingzhi = to10jz(s[j*2],s[j*2+1]);
            pic[i][j+1] = shijingzhi;
            a[shijingzhi].geshu++;
        }
    }
    sort(a,a+300,cmp);
    for (int i = 0; i < 16; i++){
        cout2hex(a[i].s);
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= pic[i][0]; j++){
            int min=1000, diz=0;
   
            for (int c = 0; c < 16; c++){
                if(pic[i][j]==a[c].s){
                    diz=c;
                    break;
                }
                if(min>abs(pic[i][j]-a[c].s)){
                    min=abs(pic[i][j]-a[c].s);
                    diz=c;
                }
            }
            cout1hex(diz);
        }
        cout<<endl;
    }
    
    return 0;
}
