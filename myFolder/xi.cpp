#include <iostream>
#include <algorithm>
using namespace std;
void tobi(int d,int b[],int& size)
{
    int i=0;
    while (d){
        b[i]=d%2;
        d/=2;
        i++;
        size++;
    }
    
}
int main()
{
    int a;
    cin>>a;
    while (a)
    {
        int i=0,h=0;
        int b[64]={0};
        int size=0;
        tobi(a, b,size );

        while(b[i]!=1) i++;
        h=i;
        while(b[i]!=0) i++;
        b[i]=b[i-1];
        b[i-1]=0;
        if(h!=0)
            for (int j = h; j < i-1; j++){
                b[j-h]=b[j];
                b[j]=0;
            }
        int ans=0;
        
        for (int j = size; j >= 0; j--){
            ans*=2;
            ans+=b[j];
        }
        cout<<ans<<endl;
        cin>>a;
    }
    return 0;
}