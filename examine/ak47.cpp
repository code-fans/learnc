#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float ans;
    int a,b,c=0,d;
    cin>>a>>b;
    int a1[100][100],b1[100][100];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin>>a1[i][j];
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin>>b1[i][j];
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if(a1[i][j]==b1[i][j])
                c++;
        }
    }
    d=a*b;
    ans=float(c * 100.0) / d;
    printf("%0.2f\n",ans);
    return 0;
}