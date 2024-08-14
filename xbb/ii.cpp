#include <iostream>
using namespace std;
int k;
bool sc(int a[][100],int i,int l,int j,int w){
    int b=0;
    for (int ii = i; ii < l; ii++){
        for (int jj = j; jj < w; jj++){
            if(a[ii][jj])
                b++;
        }
    }
    return b>=k;
}
bool func(int sizei,int sizej, int x,int y, int a[][100]){
    for (int i = 0; i <= y-sizei; i++){
        for (int j = 0; j <= x-sizej; j++){
            if(sc(a, i, sizei+i, j, sizej+j))
                return true;
        }
    }
    return false;
}

int main()
{
    int y,x;
    cin>>y>>x>>k;
    char aa;
    int a[100][100];
    int ans=10000; 
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            cin>>aa;
            a[i][j]=aa-'0';
        }
    }
    for (int i = 1; i <= y; i++){
        for (int j = 1; j <= x; j++){
            if(func(i,j,x,y,a) && i*j<ans)
                ans=i*j;
        }
    }
    cout<<ans<<endl;
    return 0;
}