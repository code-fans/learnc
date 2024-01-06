#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    cout<<str<<endl;
    while(std::next_permutation(str.begin(), str.end())){
        cout << str << endl;
    }
    return 0;
}