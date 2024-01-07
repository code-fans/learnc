#include <iostream>
#include <string>
using namespace std;

int main(){

    double its [1000];
    int len = 0;
    int i=0;
    string str;
     while(true){
        cin>>str;
        if(str=="#")
            break;
        
        if(str == "+" ){
            its [len-2]=its[len-2]+its[len-1];
            len--;
            continue;
        }
        if(str == "-" ){
            its [len-2]=its[len-2]-its[len-1];
            len--;
            continue;
        }
        if(str == "*"){
            its [len-2]=its[len-2]*its[len-1];
            len--;
            continue;
        }
        if(str == "/"){
            its [len-2]=its[len-2]/its[len-1];
            len--;
            continue;
        }
        its[len]=stod(str);
        len++;
    }

    printf("%f\n", its[0]);
    return 0;
}