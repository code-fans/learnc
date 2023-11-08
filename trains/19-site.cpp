#include <iostream>
#include <cstdio>
using namespace std;
int h[100]={0}, l[100]={0}, a[100][100];

int main()
{
    freopen("data/input.txt", "r", stdin);

    int r, c, n, m, b,ans=0,ans1=0,max=0;
    cin>>r>>c>>n;
    for (int i = 0; i < n; i++){
        cin>>m>>b;
        h[m-1]++;
        l[b-1]++;
        a[m-1][b-1] = 1;
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            int ij = h[i] + l[j] - a[i][j];
            if(ij > max){
                max = ij;
                ans = i;
                ans1 = j;
            }
        }
    }
    
    cout<<max<<endl<<ans+1<<","<<ans1+1<<endl;
    return 0;
}