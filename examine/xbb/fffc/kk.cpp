#include <iostream>
#include <cmath>
using namespace std;
int a[100000];
int m,k;

void Swap(int &i,int &j)
{
    swap(a[i],a[j]);
    swap(i,j);
}

void Find(int START,int END)
{
    if(START>=END) return ;
    int i=START;
    int j=END;
    while (i!=j){
        if(i<j)
            if(a[i]>a[j])
                Swap(i,j);
            else
                --j;
        else    
            if(a[i]<a[j])
                Swap(i,j);
            else
                ++j;
    }
    Find(i+1,END);
    Find(START,i-1);
}

int main()
{
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    Find(0, m-1);
    for(int i=0;i<m;i++)
    	cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}
/*
5
29 9 90 57 3
*/