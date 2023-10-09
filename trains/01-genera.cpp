#include<iostream>
using namespace std;
int main(){
    char name[10] = "DGZYXRHB";
    int n;
    cin >> n;
    n = n%8;
    if(n<0)
        n+=8;
    cout << name[n] << endl;
    return 0;
}