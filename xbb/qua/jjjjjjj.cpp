#include <iostream>
using namespace std;
void count(int n){
    if(n==4){
        cout<<"4,5-->9,10\n";
        cout<<"8,9-->4,5\n";
        cout<<"2,3-->8,9\n";
        cout<<"7,8-->2,3\n";
        cout<<"1,2-->7,8\n";
    } else {
        cout<<n<<','<<n+1<<"-->"<<n*2+1<<','<<n*2+2<<endl;
        cout<<2*n-1<<','<<2*n<<"-->"<<n<<','<<n+1<<endl;
        count(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}