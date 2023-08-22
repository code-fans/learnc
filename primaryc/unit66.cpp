#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

//加密 encrypt 
string encrypt(string str, int key){
    string str2 = "";
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch>='a' && ch<='z'){
            int offset = ch-'a' + key;
            if(offset >=26)
                offset -=26;
            ch = 'a' + offset;
        } else if (ch>='A' && ch<='Z'){
            int offset = ch-'A' + key;
            if(offset >=26)
                offset -=26;
            ch = 'A' + offset;
        }
        str2 += ch;
    }
    return str2;
}

//解密 decrypt
string decrypt(string str, int key){
    string str2 = "";
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch>='a' && ch<='z'){
            int offset = ch-'a' - key;
            if(offset < 0)
                offset +=26;
            ch = 'a' + offset;
        } else if (ch>='A' && ch<='Z'){
            int offset = ch-'A' - key;
            if(offset < 0)
                offset +=26;
            ch = 'A' + offset;
        }
        str2 += ch;
    }
    return str2;
}

int main(){
    cout << "请输入一段明文";
    string str2, str1;
    getline(cin, str1); //cin >> str1; //in input out output
    int key;
    cout << "请输入一个大于1小于26的密码";
    cin >> key;
    str2 = encrypt(str1, key);
    cout << str2 << endl;

    str2 = encrypt(str2, 26 - key);
    cout << str2 << endl;
    return 0;
}