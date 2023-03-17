#include <iostream>
using namespace std;
int unit51_main()
{
    int  ct=0, flag[40];
    for(int i=0; i<40; i++)
        flag[i] = 0;

    for(int i=0; i<10; i++){
        flag[i] = 1;
        flag[i*2] = 1;
        flag[i*4] = 1;
    }

    for(int i=0; i<40; i++)
        if(flag[i])
            ct ++;

    cout<<ct<<endl;
    return 0;
}

int unit51_main2()
{
    int  time=0, ct=1, teacher=0, uike=0, gjair=0;
    bool flag;
    do
    {
        flag=0;
        time++;
        if(teacher<9)
        {
            teacher=teacher+1;
            flag=1;
        }
        if(uike<9 && time%2==0){
            uike=uike+1;
            flag=1;
        }
        if(gjair<9 && time%4==0){
            gjair=gjair+1;
            flag=1;
        }
        if(flag>0)
            ct++;
    }while(teacher+uike+gjair<9*3);
    cout<<ct<<endl;
    return 0;
}
