#include<iostream>
using namespace std;
int su[100][100];
int a,b;
bool find(int qi,int qi1,int zhong,int zhong1){
    int b= su[qi+zhong][qi1+zhong1] - su[qi][qi1+zhong1] 
                    - su[qi+zhong][qi1] + su[qi][qi1];
    return b*2 == zhong*zhong1;
}

bool can(int size,int size1){
    if(size*size1%2==1)
        return false;
    for (int i = 0; i <= a-size; i++){
        for (int j = 0; j <= b-size1; j++){
            if(find(i,j,size,size1))
                return true;
        }
    }
    return false;
}
int main()
{
    cin>>a>>b;
    long long ans=0;
    char sum;
    for (int i = 0; i <= a; i++) 
        for (int j = 0; j <= b; j++){
            if(i==0 || j==0){
                su[i][j] = 0;
            } else {
                cin>>sum;
                int shiYi = sum-'0';
                su[i][j] = su[i-1][j] + su[i][j-1] - su[i-1][j-1] + shiYi;
            }
        }

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            if(can(i,j) && ans<i*j)
                ans=i*j;
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*
4 5
00000
01111
00011
00011
*/