#include <iostream>
#include <iomanip>
using namespace std;

bool isPrimeNumber(int unm){
    for (int i=2; i*i <= unm;i++){
        if (unm%i==0)
            return false;
    }
    return true;
}

int main2()
{
    int pn = 0;
    for (int i=2;i<=100000000;i++){
        if( isPrimeNumber(i) ){
            cout<< i <<'\t';
            pn++;
            if (pn%6==0)
                cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}

int main()
{
    const int maxsize = 100;
    bool a[maxsize+1];
    int i,j,unm;
    for (i=2;i<=maxsize;i++)
        a[i]=true;
    a[0]=a[1]=false;
    i=1;
    do
    {
        i++;
        if(a[i]){
            for(j=2; j <= maxsize/i; j++)
                a[i*j]=false;
        }
    } while (i<maxsize);

    unm=0;
    for (i=1;i<=maxsize;i++)
    {
        if (a[i])
        {
            cout<<setw(6)<<i;
            unm++;
            if (unm%10==0)cout<<endl;
        }
    }
    cout <<endl;
    cout<<"素数的个数"<<unm<<endl;
    return unm;
}