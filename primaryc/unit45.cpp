#include <iostream>
using namespace std;

void transNumber(int dec, int power){
    int i=0, ant[100];
    char lv;
    do{
       ant[i] = dec%power;
       dec=dec/power;
       i ++;
    }while(dec>0);

    while(i>0){
        i--;
        if( ant[i] >=10){
            lv = 'a' + (ant[i]-10);
            cout<<lv;
        } else
            cout<<ant[i];
    }
    cout << endl;
}

int unit45_main()
{
    int n , r  ,i ,ant[100];

    while(1)   {
        cout<< "输入两个正整数，将前一个整数转化为对应进制：" <<endl;
        cin >> r >> n ;
        if(r<0 || n<2)
            break;
        i=0;
        transNumber(r, n);
    }

	return 0;
}
