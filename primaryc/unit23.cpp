
#include<iostream>
using namespace std;
int unit23_main()
{
    int lucheng, shijian;
    float fieyong;
    cout << "请输入路程";
    cin >> lucheng ;
    if (lucheng>10)
        fieyong = 6+(10-2)*1.8+(lucheng-10)*1.8*1.5;
    else if (lucheng>2)
        fieyong = 6+(lucheng-2)*1.8;
    else
        fieyong = 6;
    cout <<"byh请输入时间";
    cin >> shijian;
    fieyong=fieyong+(shijian/3)*1;
    cout << fieyong;
    return 0;
}
