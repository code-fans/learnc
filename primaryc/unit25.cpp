#include <iostream>
using namespace std;
int unit25_main()
{ 
	/*  
	这个程序是计算一个 
	日期在一年的多少天 
	*/
    int day,month,sum,leap,y;
    cout<<"请输入年，月，日:" << endl;
    cin >>y >>month>>day;
    switch(month) 
    {	
	    case 1:sum=0;break;
	    case 2:sum=31;break;
	    case 3:sum=59;break;
	    case 4:sum=90;break;
	    case 5:sum=120;break;
	    case 6:sum=151;break;
	    case 7:sum=181;break;
	    case 8:sum=212;break;
	    case 9:sum=243;break;
	    case 10:sum=273 ;break;
	    case 11:sum=304;break;
	    case 12:sum=334;break;
	}
	sum+=day;
	if(y%400==0||y%4==0&&y%100!=0)
	 	leap=1;
	else
 	 	leap=0;
 	if( leap==1&&month>2)
 	 	sum++;
 	cout<<sum<<endl;
 	
 	sum = day;
    switch(month) 
    {	
	    case 12:sum += 30;
	    case 11:sum += 31;
	    case 10:sum += 30;
	    case 9:sum += 31;
	    case 8:sum += 31;
	    case 7:sum += 30;
	    case 6:sum += 31;
	    case 5:sum += 30;
	    case 4:sum += 31;
	    case 3:
	    	if(y%400==0||y%4==0&&y%100!=0)
	    		sum += 29;
	    	else
				sum += 28; 
	    case 2:sum += 31;
	    //case 1:sum += 0;
	}
 	cout<<sum<<endl;
 	
	return 0;
}
