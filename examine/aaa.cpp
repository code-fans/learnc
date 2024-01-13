#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int n,aaa;
    int x,y,s;
    char a[100][100]={{0}};
    cin>>n >>s;
    while(n>0 || s>0){
        long long ans=0;
        for (int i = 0; i < s; i++){
            for (int j = 0; j < n; j++){
                cin>>a[i][j];
                if(a[i][j]=='@'){
                    
                    ans++;
                }
            }
        }
        
    
        while (1){
            bool aaa=false;
            for (int i = 0; i < s; i++){
                for (int j = 0; j < n; j++){
                    if(a[i][j]=='@'){
                        if(i!=0&&a[i-1][j]=='.'){
                            a[i-1][j]='@';
                            ans++;
                            aaa=true;
                        }
                        if(i!=s-1&&a[i+1][j]=='.'){
                            a[i+1][j]='@';
                            ans++;
                            aaa=true;
                        }
                        if(j!=0&&a[i][j-1]=='.'){
                            a[i][j-1]='@';
                            ans++;
                            aaa=true;
                        }
                        if(j!=n-1&&a[i][j+1]=='.'){
                            a[i][j+1]='@';
                            ans++;
                            aaa=true;
                        }
                    }
                }
            }
            if(!aaa)
                break;
        }
        cout<<ans<<endl;
        cin>>n >>s;
    }
    return 0;
}

