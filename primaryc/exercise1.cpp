#include <iostream>
#include <iomanip>

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
    return 0;
}


int enumPrimeNumber(){
    cout << "请输入一个正整数：";
    long long n;
    cin >> n;

    return 0;
}

// 五个五个数余三， 七个七个数余二

int findTheNumber(){
    int n, x ,i=0;
    for(x=0; 5*x<1000; x++){
        n = 5 * x + 3;
        if(n % 7 == 2){
            cout << setw(6) << n;
            i++;
            if(i%5==0)
                cout <<endl;
        }
    }
}


int primaryc2()
{
    int ans[10];
    for(int i=0;i<10;i++){
        ans[i]=0;
    }
    cout<<"请输入一个数不超过10位"<<endl;
    long long sum;
    cin>>sum;
    do
    {
        int d =sum%10;
        sum/=10;
        ans[d]++;
    }while(sum!=0);

    bool cf = false;
    for(int i=0;i<10;i++){
        if(ans[i]>1 ){
            cout<<i<<"重复"<<ans[i]<<"次"<<endl;
            cf=true;
        }
    }
    if(cf)
        cout<<"有重复"<<endl;
    else
        cout<<"没重复"<<endl;
    return 0;
}

int primaryc()
{
    long long  n, m=0, u;
    cin>>n;
    u=n;
    do{
        m=m*10+n%10;
        n/=10;
    }while(n!=0);
    if(u==m)
        cout<<"是回文数";
    else
        cout<<"不是回文数";
}
