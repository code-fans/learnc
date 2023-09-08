#include<iostream>
using namespace std;

int search(int b[], int low ,int high,int key);

int main()
{
    const int MAX=1000;
    int a[MAX],n;
    for(int i=0;i<MAX;i++)
        a[i]=i+1;
    cout<<"n=";
    do
    {
        cin>>n;
    } while (n<1 || n>100);

    if(search(a, 0, MAX-1 ,n))
        cout<<"成功！";
    else
        cout<<"失败！";
    return 0;
}

int search(int b[], int low ,int high,int key)
{
    int mid= (low + high) / 2;
    cout << b[mid] <<endl;
    if(b[mid]==key)
        return b[mid];
    if(b[mid]>key)
        return search(b, low, mid-1, key);
    return search(b, mid+1, high, key);
}
