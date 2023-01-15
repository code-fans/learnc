#include <iostream>
using namespace std;

int func(int a, int b){
    return a * b + a + b;
}

int deffunc_main(){
    int  n = 1;
    for(int i=0; i<6; i++){
        n =  func(n, 9);
        cout << n << endl;
    }

    cout <<  func( func( func( func( func( func(1,9),9),9),9),9),9);
    return 0;
}
