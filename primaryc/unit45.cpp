#include <iostream>
using namespace std;
// TODO �����ת���ĸ���Ϊ��� 64����
// ��� ��������ж� 

void transNumber(long long dec, int power){
    int i=0, ant[100];
    char lv;
    do{
       ant[i] = dec%power;
       dec=dec/power;
       i ++;
    }while(dec>0);

    while(i>0){
        i--;
<<<<<<< HEAD
        if(ant[i]==62)
        	cout<<"-";
        else if(ant[i]==63)
        	cout<<"_";
        else if(ant[i]>=36){
			lv='A'+(ant[i]-36);
			cout<<lv; 
        }else if( ant[i] >=10){ //26
=======
        if( ant[i] >=10){

>>>>>>> 73e88410ca24ca19ffab65eefbb51ef0e4fab45c
            lv = 'a' + (ant[i]-10);
            cout<<lv;
        }else
            cout<<ant[i];
    }
    cout << endl;
}

int unit45_main()
{
    int n, ant[100];
	long long r;
    while(1)   {
        cout<< "������������������" <<endl;
        cin >> r >> n ;
        if(r<0 || n<2)
            break;
        transNumber(r, n);
        r=0;
        n=0;
    }

	
	return 0;
}

