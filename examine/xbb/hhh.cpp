#include <iostream>
using namespace std;
 
int n,m,a[100][100], b[100][100];

bool check(int i, int j, int l, int w){
    int h = b[i+l][j+w] + b[i][j] - b[i][j+w] - b[i+l][j];   
    return h*2 == l*w;
}

bool func(int l,int w){
   
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
           
           
        }
    }
    
  
  
    cout<<ans<<endl;

    return 0;
}
/*
4 5
00000
01111
00011
00011
*/