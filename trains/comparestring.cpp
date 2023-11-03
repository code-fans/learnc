#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[1000], str1[1000];
    int n, m, i =0, j=0;
    cin.getline(str, 1000,'\n');
    cin.getline(str1, 1000,'\n');
    n=strlen(str);
    m=strlen(str1);
    while(i<n && str[i]==' ') i++;
    while(j<m && str1[j]==' ') j++;
    while(i<n && j<m){
        if(str[i]!=str1[j]  && (str[i]-32) != str1[j] && str[i] != (str1[j]-32)){
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
        j++;
        while(i<n && str[i]==' ') i++;
        while(j<m && str1[j]==' ') j++;
    }
    cout <<(i==n && j==m ?"YES":"NO")<<endl;
    return 0;
}