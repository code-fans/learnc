 #include <iostream>
 using namespace std;
 int unit5_main()
 {
 
	int sum = 0;
	sum += 1;
	sum += 2;
	sum += 3;
	sum += 4;
	cout <<"1+2+3+4=" <<sum << endl;
	
	sum = 0;
	for(int i=1; i<101; i++){
		sum += i;	
	}
	cout <<"1+2+3+......+100=" <<sum << endl;
	return 0;

 }
