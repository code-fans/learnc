#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, int> mp;
    int b=1;
    for (int j = 0; j < 10000; j++){
        b = b *2011%10000;
        if(mp.count(b)){
            cout<<mp[b]<<' '<<j<<' '<<b<<endl;
            break;
        }
        mp[b] = j;
        //cout<<a[j]<<',';
    }
    cout << "ok is done!" << endl;
    return 0;
}