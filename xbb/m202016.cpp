#include <bits/stdc++.h>

using namespace std;

bool nextJam( string & s, char e, int nl){
    int j=nl-1;
    while(j>=0 && s[j]== (e+j-nl+1)){
        j--;
    }
    if(j<0) return false;
    s[j] = s[j]+1;
    for(j++;j<nl;j++){
        s[j] = s[j-1]+1;
    }
    return true;
}

int main(){
    int n,l,s;
    cin >> n >> l >>s;
    string str;
    cin >> str;
    char endChar = 'a' + l-1;
    for(int i=0;i<5;i++){
        if(! nextJam( str, endChar, s))
            break;
        cout << str << endl;
    }
    return 0;
}