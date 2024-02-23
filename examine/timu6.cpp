#include <iostream>
#include <algorithm>
#include <string>
#include  <cmath>
using namespace std;
struct word{
    string str;
    int used;
};
int maxL=0;
word a1[30];

int isjong(string a, string b){
    int len=a.size(),len1=b.size();
    int n=min(len,len1)-1;
    for (int i = 0; i < n; i++){
        bool ismatch = true;
        for (int j = 0; j <= i; j++){
            if (a[len-1-j]!=b[i-j]){
                ismatch=false;
                break;
            }
        }
        if(ismatch)
            return len1-i-1;
    }
    return -1;
}

void dfs(int changdu, string currStr,int n){
    if (maxL< changdu){
        maxL = changdu;
    }
    for (int i = 0; i < n; i++){
        if(a1[i].used!=2){
            int ans=isjong(currStr, a1[i].str);
            if(ans>0){
                a1[i].used++;
                dfs(changdu+ans, a1[i].str, n);
                a1[i].used--;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a1[i].str;
        a1[i].used=0;
    }
    string start;
    cin >> start;
    dfs(start.size(), "@"+start, n);
    cout<<maxL<<endl;
}