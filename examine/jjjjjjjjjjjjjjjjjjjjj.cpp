#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct kk
{
    string id;
    int ln;
    int deji;
};
bool compare(kk a,kk b){
    if((a.ln>=60 || b.ln>=60)){
        if (a.ln==b.ln){
            return a.deji<b.deji;
        }
        return a.ln>b.ln;
    }
    return a.deji<b.deji;
}

kk a[10000];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i].id;
        cin>>a[i].ln;
        a[i].deji=i+1;
    }
    sort(a,a+n,compare);
    for (int i = 0; i < n; i++){
        cout<<a[i].id<<endl;
    }
}