#include <iostream>

namespace pettystl {
    class BigInteger {
        private:
            int data[10];
            int len;
            char sign;
        public:
            bool operator == (BigInteger other){
                return true;
            }

            BigInteger& operator << (istream is) {
            }
    };
}