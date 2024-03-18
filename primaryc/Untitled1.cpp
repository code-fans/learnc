#include <iostream>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	for(int i=1;i<=n;i++){
		if(i%h!=0)
			cout<<i<<endl; 
	}
	return 0;
} 
