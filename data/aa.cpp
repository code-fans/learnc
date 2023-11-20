#include <iostream>
#include <string>

using namespace std;

struct pp
{
    string a;
    float b;
    int c;
};

pp aa;

int main()
{
    int n,jg=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>aa.a>>aa.b>>aa.c;
        if (aa.b>=37.5 && aa.c==1){
            cout<<aa.a<<endl;
            jg++;
        }
    }
    cout<<jg<<endl;
    return 0;
}