#include <iostream>

using namespace std;
int main1()
{
    int y,y1;
    cin>>y>>y1;
    if (y1==1||y1==3||y1==5||y1==7||y1==8||y1==10||y1==12){
        cout<<31<<endl;
    }
    else if(y1!=2){
        cout<<30<<endl;
    }
    else if ((y%4==0&&y%100!=0)||y%400==0){        
        cout<<29<<endl;
    }
    else{
        cout<<28<<endl;
    }
    return 0; 
}

int main()
{
    int mianji;
    cin>>mianji;
    int ans=0;
    for (int i = 1; i * i <= mianji; i++){

        if(mianji%i==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    long long a=1024;
    a*=a;
    // a*=a;
    cout<<endl<<a<<endl;
    return 0;
}