#include <iostream>
using namespace std;

int word[1000]={0};

bool czd(int w,int len,int h)
{
    bool ans=true;
    for (int i = h; i < len; i++)
        if (w==word[i])
            ans=false;
    return ans;
}

int main()
{
    int m,n, w, len=0, ans=0, j=0;
    cin>>m>>n;
    for (int i = 0; i < n; i++){
        cin>>w;
        if(czd(w, len, j)){
            word[len]=w;
            len++;
            if (len>m)
                j++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}