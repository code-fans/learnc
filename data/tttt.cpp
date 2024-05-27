#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool issimilar(string a,string b){
    int n=a.size(),m=b.size();
    int i=0,j=0,t, c=0;
    if(n==m){
        t=0;
    }
    else if(n==m-1){
        t=1;
    }
    else if (n==m+1){
        t=2;
    }
    else 
        return false;
    while (i<n&&j<m){
        if (a[i]!=b[j]){
            c++;
            if(t==1)
                i--;
            else if(t==2)
                j--;
        }
        i++;
        j++;
    }
    return c<=1;
}

int main()
{
    string a,b;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a>>b;
        if(!issimilar(a,b))
            cout<<"not similar"<<endl;
        else
            cout<<"similar"<<endl;
    }
    return 0;
}
/*

5
apple applee
apple appe
apple bpple
applee bpple
apple apple

*/