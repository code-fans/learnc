#include <iostream>

using namespace std;

int main() {

    auto swap_template = [](auto& x, auto& y) {
        auto temp = std::move(x);
        x = std::move(y);
        y = std::move(temp);
    }; // 这个地方一定有分号， 和 class ，struct 类、结构体定义一样必须有分号
    
    auto swap_int = [](int & a, int & b){
        int c= a;
        a = b;
        b = c;
    }; 
    
    int c= 5, d =6;
    swap_int(c, d);
    cout << c << ' ' << d << endl;
    return 0;
}
