#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int a[100100], longest;

int main()
{
    int b,n;
    scanf("%d", &n);
    longest = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &b);
        if(longest==0 || b>=a[longest-1]){
            a[longest] = b;
            longest++;
        } else{ 
            int p = upper_bound(a, a+longest, b) - a;
            a[p] = b;
        }
    }
    cout << longest << endl;
    return 0;
}