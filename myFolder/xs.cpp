#include <iostream>
using namespace std;
int main()
{
    long long n,a,b[100],size=0,yaojiangeshu;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a>>yaojiangeshu;
        size=0;
        while (a){
            b[size]=a%10;
            a/=10;
            size++;
        }
        while (yaojiangeshu){
            bool isd=true;
            for (int j = size-1; j > 0&& yaojiangeshu>0; j--){
                if(b[j]>b[j-1]){
                    for(int c=j;c<size-1;c++)
                        b[c]=b[c+1];
                    yaojiangeshu--;
                    size--;
                    isd=false;
                    break;
                }
            }
            if(isd){
                break;
            }
        }
        bool hasshuchu=false;
        for (int j = size-1; j >= yaojiangeshu; j--){
            if(b[j]!=10){
                cout<<b[j];
                hasshuchu=true;
            }
        }
        cout<<endl;
    }
    return 0;
}