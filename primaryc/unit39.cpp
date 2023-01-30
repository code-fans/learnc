#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const char * display2(int n){
    switch(n){
        case 1: return "1剪刀";
        case 2: return "2石头";
        case 3: return "3布";
    }
    return "";
}

int unit39_main()
{
	int i,n,m,w,dn,h;
	srand(time(0));
	for(i=0;i<10;i++){
        cout<<"输入1剪刀，2石头，3布: ";
        cin >>n;
        if(n<1||n>3)continue;
        m=rand()%3+1;
        h=m-n;
        cout << "电脑出的是：" << display2(m) << " 你出的是： "<< display2(n)<< " ";
        if(h==-2||h==1){
            dn++;
            cout<<" 你输了";
        }
        else if(h==0)
            cout<<"平";
        else {
            cout<<"你赢了" ;
            w++;
        }
        cout << endl ;
	}
	cout<<"我赢了"<<w<<"电脑赢了"<<dn;
	return 0;

}


int unit39_main2(){
    int sum,i,x,y,dymbol, ans, n;
    sum = 0;
    for (i=1;i<=10;i++)
    {
        srand(time(0));
        x=rand()%9+1;
        y=rand()%9+1;
        dymbol=rand()%2+1;
        if(x<y&&dymbol==1)
        {
         x+=y;
         y=x-y;
         x=x-y;
         cout<<x<<"-"<<y<<"=";
         ans = x - y;
        }
        else if(dymbol==1){
            cout<<x<<"-"<<y<<"=";
            ans = x-y;
        }
        else {
            cout<<x<<"+"<<y<<"=";
            ans = x + y;
        }
        cin >> n;
        if(ans == n){
            cout << "对！"<< endl;
            sum += 10;
        } else {
            cout << "错" << endl;
        }

    }
    cout << "您的得分："<< sum << endl;

    return 0;
}
