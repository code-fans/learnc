#include <iostream>
#include <cstdio>

#define BIG_INTEGET_MAX_LENGTH 1000
namespace pettystl {
    
    class BigInteger {
        private:
            char data[BIG_INTEGET_MAX_LENGTH];
            int len;
            int sign;
        private:
            int absCompare(BigInteger bint1, BigInteger bint2);
            int absAdd(char dest[], char opt1[], char opt2[]);
            int absMinus(char dest[], char opt1[], char opt2[]);
        public:
            std::string toString();
            BigInteger& fromString(std::string str);
            int compareTo(const BigInteger& other);

            friend bool operator == (const BigInteger& other, const BigInteger& other2);

            friend std::ostream& operator << (std::ostream& os, const BigInteger& other);

            friend std::istream& operator >> (std::istream& is, BigInteger& other);

            friend BigInteger operator+ (const BigInteger& other, const BigInteger& other2);
            friend BigInteger operator- (const BigInteger& other, const BigInteger& other2);
    };

    int BigInteger::absCompare(BigInteger bint1, BigInteger bint2) {
        return 1;
    }

    int BigInteger::absAdd(char dest[], char opt1[], char opt2[]) {
        return 0;
    }

    int BigInteger::absMinus(char dest[], char opt1[], char opt2[]) {
        return 0;
    }

    int BigInteger::compareTo(const BigInteger& other) {
        return 1;
    }

    std::string BigInteger::toString() {
        char str[BIG_INTEGET_MAX_LENGTH];
        std::memcpy(str, data, len);
        int strLen = len;
        if(sign<0){
            str[strLen] = '-';
            strLen ++;
        }
        str[strLen] = '\0';
        std::reverse(str, str+strLen);
        std::string s = str;
        return s;
    } 

    BigInteger& BigInteger::fromString(std::string str) {
        len = str.length();
        std::memcpy(data, str.data(), len);
        std::reverse(data, data+len);
        sign = 1;
        if(str[len-1] == '+' || str[len-1] == '-'){
            sign = str[len-1] == '-' ? -1 : 1;
            len -- ;
            data[len-1] = '\0';
        }
        return *this;
    }

    bool operator == (const BigInteger& other, const BigInteger& other2) {
        if(other.len ==1 && other2.len==1 && other.data[0] == '0' && other2.data[0] == '0')
            return true;
        if(other.sign != other.sign || other.len != other2.len)
            return false;
        for(int i=0; i<other.len; i++){
            if(other.data[i] != other2.data[i])
                return false;
        }
        return true;
    }

    std::ostream& operator << (std::ostream& os, const BigInteger& other) {
        if(other.sign<0){
            os << '-';
        }
        for(int i=other.len-1; i>=0; i--){
            os << other.data[i];
        }
        return os;
    }

    std::istream& operator >> (std::istream& is, BigInteger& other) {
        std::string str;
        is >> str;
        other.fromString(str);
        return is;
    }

    BigInteger operator+ (const BigInteger& other, const BigInteger& other2) {
        int z = 0;
        BigInteger xy;
        xy.len = std::max(other.len, other2.len);
        xy.sign = 1;
        for (int i = 0; i<xy.len; i++) {
            int a=0, b=0;
            if(i<other.len)
                a= other.data[i]-'0';

            if(i<other2.len)
                b=other2.data[i]-'0';

            xy.data[i] = (a+b+z)%10+'0';
            z=(a+b+z)/10;
        }
        if (z!=0) {
            xy.data[xy.len] = z+'0';
            xy.len ++;
        }
        return xy;
    }
}

int main() {
    pettystl::BigInteger bint1, bint2, bint3;
    std::cin >> bint1 >> bint2;
    bint3 = bint1 + bint2;
    std::cout << bint3 << std::endl;
    return 0;
}
