#include <iostream>
using namespace std;
int toBinary()
{
	long long arr[80],i,v;
	cout << "请输入一个正整数: ";
	cin>>v;
    for(i=0;i<80;i++){
        arr[i]=v %2;
        v=v/2;
        if(v==0)
            break;
    }

    cout << "它的二进制是: "<<endl;
    //for(i=31; i>0 && arr[i]==0; i-- );

    for(; i>=0; i-- )
        cout << arr[i];
    cout << endl;

   	return 0;
}

int calcFactor()
{
    int i ,u ,j;
    cin>>i;
    u=0;
    for(j=1;j<=i;j++){
        if(i%j==0){
            u++;
            cout << j << "  ";
        }
    }
    cout << endl<< i<<"有"<<u << "个因子，";

    if(u==2)
        cout <<"是素数";
    else
        cout <<"不是素数";

}
