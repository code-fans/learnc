#include <iostream>  
using namespace std;
int unit18_main()
{
	bool flag;
	int year;
	cout <<"请输入一个年份";
	cin>>year;
	if((year%4==0&&year%100!=0)||year%400==0) 
	cout<<year<<"是闰年"<<endl;
	else
	    cout<<year<<"是平年"<<endl;
	
 	int eat, sleep, mood;
 	cout<<"请输入三个两位数";
 	cin>>eat>>sleep>>mood;
 	
 	if (eat>=80&&sleep>=80&&mood>=80)
	 	cout <<"新三好"<<endl;
	else if (eat>=80  &&sleep>=80&&mood<80 ||
			 eat>=80  &&mood>=80 &&sleep<80||
			 sleep>=80&&mood>=80 &&eat<80)
		cout<<"双优生"<<endl;
	else 
		cout<<"继续努力"<<endl; 
		
	if (eat>=80&&sleep>=80&&mood>=80)
	 	cout <<"新三好"<<endl;
	else if (eat>=80&&sleep>=80||eat>=80&&mood>=80||sleep>=80&&mood>=80)
		cout<<"双优生"<<endl;
	else 
		cout<<"继续努力"<<endl; 
		
	int s=0;
	if(eat>=80)s++;
	if(sleep>=80)s++;
	if(mood>=80)s++;
	if(s==3)
		cout <<"新三好"<<endl;
	else if(s==2)
		cout<<"双优生"<<endl;
	else 
		cout<<"继续努力"<<endl; 
	
	 return 0;
}
