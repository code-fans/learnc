#include <iostream>

#define BIG_INTEGET_MAX_LENGTH 1000
namespace pettystl {
    
    class BigInteger {
        private:
            char data[BIG_INTEGET_MAX_LENGTH];
            int len;
            int sign;

        public:
            friend bool operator == (const BigInteger& other, const BigInteger& other2){
                return true;
            }

            ostream& operator << (ostream& os) {
            }

            istream& operator >> (istream& is) {
            }

            friend BigInteger operator+ (const BigInteger& other, const BigInteger& other2) {
            }

    };
}