#include <bits/stdc++.h>
using namespace std;
int cansqap(int a){
	int ans=1,jc;
	for(int j=2;j*j<=a;j++){
		jc=0;
		while(a%j==0){
			a /= j;
			jc ++;
			if(jc%2==0)
				ans*=j;
		}
	}
	return ans;
}

int gcd(int a,int b){
	a= a<0?-a:a;
	b= b<0?-b:b;
	while(b>=1){
		a%=b; 
		swap(a,b);
	}
	return a;
}

void printFenshu(int fz, int fm){
	int gc = gcd(fz,fm);
	fz/=gc;
	fm/=gc;
	if(fm==1)
		cout<<fz;
	else
		cout<<fz<<'/'<<fm;
}

int main()
{
	int n,h;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<0){
			a=-a;
			b=-b;
			c=-c;
		}
		long long bart = b*b-4*a*c;
		if(bart<0){
			cout<<"NO"<<endl;
			continue;
		}
		if(bart==0){
			printFenshu(-b, a+a); 
			cout<<endl;
			continue;
		}
		int first = cansqap(bart);
		int second = bart/first/first;
		if(second==1){
			printFenshu(-b+first,a+a); 
			cout<<endl;
		} else {
			if(b!=0){
				printFenshu(-b,a+a);
				cout<<'+';
			}
			int fz = first;
			int fm = a+a;
			int gc = gcd(fz,fm);
			fz /= gc;
			fm /= gc;
			if(fz!=1)
				cout<<fz<<'*';
			cout<<"sqrt("<<second<<')';
			if(fm>1)
				cout<<'/'<<fm;
			cout<<endl;
		}
	}
	return 0;
}
