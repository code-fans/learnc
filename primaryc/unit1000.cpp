#include <iostream>
using namespace std;
int unit1000_main()
{
    double pei=0, n=1;
    for(int i=1; i<1000000; i++){
        pei += n * 4 / (double)(2*i-1);
        n *= -1;
    }
    cout << pei << endl;
}


int sawyerChickenAndRabbit(){
    int header, foot , i , u;
    cout << "鸡兔同笼，请输入头和脚" << endl;
    cin>>header>> foot;



    cout<<"一共有"<<header<<"个头一共有"<<foot<<"只脚有"<<i<<"只兔子"<<"和"<<u<<"只鸡";
}


int wilburChickenAndRabbit2(){
    int header, foot ,i ,u;
    cout << "鸡兔同笼，请输入头和脚" << endl;
    cin>>header>> foot;
    i=(foot-(header*2))/2;
    u=header-i;
    cout<<"一共有"<<header<<"个头一共有"<<foot<<"只脚有"<<i<<"只兔子"<<"和"<<u<<"只鸡";
}
