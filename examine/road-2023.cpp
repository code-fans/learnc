#include <iostream>
using namespace std;
int a[1000000]={0},a1[1000000]={0};
int main()
{
    int d,n;
    cin>>d;
    cin>>n;
    for (int i = 0; i < d-1; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < d; i++)
    {
        cin>>a1[i];
    }
    
    int ans=0, s=0, l=a[0], p=a1[0];

    for (int i = 1; i<d-1 ; i++)
    {
        if (a1[i] < p)
        {
            int my = (l -s) / n ;
            if((l-s) % n >0){
                my++;
            }
            s = my * n + s - l;
            ans += my * p;
            p = a1[i];
            l=0;
        }
        l += a[i];
    }
    if(l-s>0){
        int my =  (l -s) / n ;
        if((l-s) % n >0){
            my++;
        }
        ans += my * p;
    }
    
    cout<<ans<<endl;
    return 0;
}