#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int l, int ar[]){
    for(int i=0; i<l; i++)
        cout << setw(6) << ar[i];
    cout << endl;
}

int main()
{
    freopen("srotdata.txt", "r", stdin);
    int len;
    cin >> len;
    int a[len];

    for(int i=0;i<len;i++)
        cin>>a[i];




    displayArray(len, a);
    return 0;
}
