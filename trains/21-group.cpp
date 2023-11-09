#include <iostream>
using namespace std;
int main(){
    long long n,a[10000],max=0,zh=0,ans,s=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        zh+=a[i];
        if (max<a[i]){
            max=a[i];
        }
    }
    for(int i=max; i<=zh; i++){
        if(zh % i == 0){
            int fz=0;
            bool nfzm=true;
            for(int j=0; j<n;j++){
                fz+=a[j];
                if (fz==i)
                {
                    fz=0;
                } else if (fz>i){
                    nfzm=false;
                    break;
                }
            }
            if (nfzm)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}