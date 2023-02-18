#include <iostream>
using namespace std;

int func(int a, int b){
    return a * b + a + b;
}
//output
 
int deffunc_main(){
    int  n = 1;
    for(int i=0; i<6; i++){
        n =  func(n, 9);
        cout << n << endl;
    }

    cout << endl<< func(func(func(func(func(func(1, 9), 9), 9), 9), 9), 9)
	      << endl;
    return 0;
}
