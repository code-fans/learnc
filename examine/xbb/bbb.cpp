#include <iostream>
#include <algorithm>
using namespace std;
int w[40];
int Bag(int s,int n){
    if(s==0)
        return 1;
    if(s<0||(s>0&&n<1))
        return 0;
    if (Bag(s-w[n],n-1)){
        cout<<w[n]<<"\n";
        return 1;
    }
    return Bag(s,n-1);
}
int main()
{
    int s,n;
    cin>>s>>n;
    for (int i = 1; i <= n; ++i)
        cin>>w[i];
    if(!Bag(s,n))
        cout<<"Failed!"<<endl;
    return 0;
}