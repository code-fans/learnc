#include <iostream>  
using namespace std;
int unit18_main()
{
	bool flag;
	int year;
	cout <<"������һ�����";
	cin>>year;
	if((year%4==0&&year%100!=0)||year%400==0) 
	cout<<year<<"������"<<endl;
	else
	    cout<<year<<"��ƽ��"<<endl;
	
 	int eat, sleep, mood;
 	cout<<"������������λ��";
 	cin>>eat>>sleep>>mood;
 	
 	if (eat>=80&&sleep>=80&&mood>=80)
	 	cout <<"������"<<endl;
	else if (eat>=80  &&sleep>=80&&mood<80 ||
			 eat>=80  &&mood>=80 &&sleep<80||
			 sleep>=80&&mood>=80 &&eat<80)
		cout<<"˫����"<<endl;
	else 
		cout<<"����Ŭ��"<<endl; 
		
	if (eat>=80&&sleep>=80&&mood>=80)
	 	cout <<"������"<<endl;
	else if (eat>=80&&sleep>=80||eat>=80&&mood>=80||sleep>=80&&mood>=80)
		cout<<"˫����"<<endl;
	else 
		cout<<"����Ŭ��"<<endl; 
		
	int s=0;
	if(eat>=80)s++;
	if(sleep>=80)s++;
	if(mood>=80)s++;
	if(s==3)
		cout <<"������"<<endl;
	else if(s==2)
		cout<<"˫����"<<endl;
	else 
		cout<<"����Ŭ��"<<endl; 
	
	 return 0;
}
