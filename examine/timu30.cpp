#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str,str1,zidi[26][26],aostr;
    for (int i = 0; i < n; i++){
        cin>>str>>str1;
        zidi[i][0]=str;
        zidi[i][1]=str1;
    }
    cin>>aostr;
    string nstr;
    for (int i = 0; i < aostr.size()-5; i++){
        int ni=0;
        while (i<aostr.size()&&aostr[i]>='a'&&aostr[i]<='z'&&aostr[i]>='A'&&aostr[i]<='Z'){
            nstr+=aostr[i];
            i++;
        }
        for (int j = 0; j < n-1; j++){
            if(nstr==zidi[i][0])
                cout<<zidi[i][1]<<aostr[i];
            else   if(nstr==zidi[i][1])
                cout<<zidi[i][0]<<aostr[i];
            }
    }
    cout<<"UNK."<<endl;
    return 0;
}