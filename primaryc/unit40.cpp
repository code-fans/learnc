#include <iostream>
using namespace std;
int unit40_main()
{
	int arr[32],i,v;
	cout << "请输入一个正整数: ";
	cin>>v;
    for(i=0;i<32;i++){
        arr[i]=v %2;
        v=v/2;
    }

    cout << "它的二进制是: "<<endl;
    for(i=0 ; i<32; i++ )
        cout << arr[31-i];
    cout << endl;

    for(i=31; i>=0 && arr[i]==0; i-- );
    for(; i>=0; i-- )
        cout << arr[i];
    cout << endl;

    bool findFirstOne = false;
    for(i=31;i>=0;i--){
        if(arr[i]>0)
            findFirstOne = true;
        if(findFirstOne)
            cout<<arr[i];
    }
   	return 0;
}


