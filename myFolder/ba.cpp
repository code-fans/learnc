#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b[10000];
    while (cin>>a){
        double ao=0;
        int max=0;
        for (int i = 0; i < a; i++){
            cin>>b[i];
            ao+=b[i];
            if(max<b[i])
                max=b[i];
        }
        if(b[a-1]>ao/2){
            printf("%0.1f\n",ao-max);
        }
        else{
            printf("%0.1f\n",ao/2);
        }
    }
    return 0;
}