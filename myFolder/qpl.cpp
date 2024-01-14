#include <iostream>
#include <string>
using namespace std;
void pailie(int l,string str){
    int len = str.size();
    //判断一个退出条件
    if(l==len-1){
        cout<<str<<endl;
        return ;
    }

    for (int i = l; i < len; i++){
        string str2=str;
        char c=str2[i];
        for (int j = i; j > l; j--){
            str2[j]=str2[j-1];
        }
        str2[l]=c;
        pailie(l+1,str2);
    }
}
int main(){ 
    string str;
    cin>>str;
    pailie(0 , str);
    return 0;
}