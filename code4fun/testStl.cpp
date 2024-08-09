
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1,1,2,3,3,3,3,3,5,6,7,8,9};
    int * e = lower_bound(a, a+13, 4);
    cout << *e << endl;
    for(int * l = lower_bound(a, a+13, 4); l<upper_bound(a, a+13, 3); l++){
        cout << *l << endl;
    }
    return 0;
}
