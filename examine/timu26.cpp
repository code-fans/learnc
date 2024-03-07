#include <iostream>
using namespace std;
int main()
{
    // cout << (-1) % 9 +1 << endl;
    int n;
    long long m;
    cin>>n;
    int dj=1;
    int ao=0;
    for(int i=0;i<n;i++){
        cin>>m;
        while (m!=0){
            int is=m%10;
            if(dj%2) is = (is * 7 - 1) % 9 + 1;
            ao+=is;
            m/=10;
            dj++;
        }
        if (ao%8==0)
            cout<<'T'<<endl;
        else
            cout<<'F'<<endl;
    }
    return 0;
}