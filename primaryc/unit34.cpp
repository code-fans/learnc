#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void primeNumberFilter(int unm[],int m){ 
    int k=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    for(int i=2;i<=100;i++){
        if(unm[i]!=0){
            k++;
            cout<<unm[i]<<endl;
            for(int u=i*i; u<=m; u+=i)
                unm[u]=0;
        }
    } 
    cout<<k<<endl;
}    
    
void listPrimeNumber(int n){
    int pn[1000000];
    int total=1;
    pn[0]=2;
    cout << setw(4)<< pn[0];
    for(int i=3; i<=n; i++){
        bool isPrime = true;
        for(int j=0; j<total && pn[j]  <= sqrt(i)+1 ; j++ ){
            if(i % pn[j]==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            pn[total] = i;
            cout << setw(4)<< pn[total];
            total++;
            if(total % 5 == 0)
                cout << endl;
        }
    }
}

int main()
{
    int m;
    cin>>m;
    listPrimeNumber(m);
 /*
    int num[m+1];
    for(int i=0; i<=m; i++)
        num[i] = 1;

    primeNumberFilter(num, m);
    */   
    return 0;
}