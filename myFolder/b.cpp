#include <iostream>
using namespace std; 
int main()
{
    char a[9][9];
    int n;
    cin>>n;
    while (n!=0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin>>a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (a[i][j]!='X'){
                    a[i][j]='X';
                    for (int k = 0; k < n; k++){
                        if(i-k-1!=0)
                            
                    }
                    
                }
                
            }
        }
    }
    return 0;
}