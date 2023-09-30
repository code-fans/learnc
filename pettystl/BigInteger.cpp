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
            void trimHighZero();
            int absCompare(const BigInteger& bint1, const BigInteger& bint2);
            int absAdd(char dest[], const BigInteger& bint1, const BigInteger& bint2);
            int absMinus(char dest[], const BigInteger& bint1, const BigInteger& bint2);
        public:
            std::string toString();
            BigInteger& fromString(const std::string str);
            int compareTo(const BigInteger& other);

            friend bool operator == (const BigInteger& other, const BigInteger& other2);
            friend std::ostream& operator << (std::ostream& os, const BigInteger& other);
            friend std::istream& operator >> (std::istream& is, BigInteger& other);
            friend BigInteger operator+ (const BigInteger& other, const BigInteger& other2);
            friend BigInteger operator- (const BigInteger& other, const BigInteger& other2);
    };

    void BigInteger::trimHighZero() {
        while(len>1 && data[len-1] == '0'){
            len --;
            data[len] = '\0';
        }
    }

    int BigInteger::absCompare(const BigInteger& bint1, const BigInteger& bint2) {
        if(bint1.len>bint2.len)
            return 1;
        if(bint1.len<bint2.len)
            return -1;
        for(int i= bint1.len-1; i>=0; i--) {
            if(bint1.data[i] > bint2.data[i])
                return 1;
            if(bint1.data[i] < bint2.data[i])
                return 1;
        }
        return 0;
    }

    int BigInteger::absAdd(char dest[], const BigInteger& other, const BigInteger& other2) {
        int z = 0;
        int len = std::max(other.len, other2.len);
        for (int i = 0; i< len; i++) {
            int a=0, b=0;
            if(i<other.len)
                a= other.data[i]-'0';

            if(i<other2.len)
                b=other2.data[i]-'0';

            dest[i] = (a+b+z)%10+'0';
            z=(a+b+z)/10;
        }
        if (z!=0) {
            dest[len] = z+'0';
            len ++;
        }
        dest[len] = '\0';
        return len;
    }

    int BigInteger::absMinus(char dest[], const BigInteger& other, const BigInteger& other2) {
        int z = 0;
        int len = other.len; // bint1 >= bint2
        for (int i = 0; i< len; i++) {
            int a=0, b=0;
            if(i<other.len)
                a= other.data[i]-'0';

            if(i<other2.len)
                b=other2.data[i]-'0';

            if(a+z<b){
                dest[i] = (10+a+z -b)+'0';
                z = -1;
            } else {
                dest[i] = (a+z - b) + '0'; 
                z = 0;
            }
        }
        dest[len] = '\0';
        return len;
    }

    int BigInteger::compareTo(const BigInteger& other) {
        if(len ==1 && other.len==1 && data[0] == '0' && other.data[0] == '0')
            return 0;
        if(this->sign > other.sign)
            return 1;
        if(this->sign < other.sign)
            return -1;

        return this->sign * absCompare(*this, other);
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

    BigInteger& BigInteger::fromString(const std::string str) {
        len = str.length();
        std::memcpy(data, str.data(), len);
        std::reverse(data, data+len);
        sign = 1;
        if(data[len-1] == '+' || data[len-1] == '-'){
            sign = data[len-1] == '-' ? -1 : 1;
            len -- ;
        }
        data[len] = '\0';
        trimHighZero();
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
        BigInteger sum;
        if(other.sign == other2.sign){
            sum.sign = other.sign;
            sum.len = sum.absAdd(sum.data, other, other2);
            return sum;
        }
        int c = sum.absCompare(other, other2);
        if(c==0){ // return zero
            sum.sign = 1;
            sum.len=1;
            sum.data[0] = '0';
            sum.data[1] = '\0';
            return sum;
        }
        if(c>0){
            sum.sign = other.sign;
            sum.len = sum.absMinus(sum.data, other, other2);
            sum.trimHighZero();
            return sum;
        }
        sum.sign = other2.sign;
        sum.len = sum.absMinus(sum.data, other2, other);
        sum.trimHighZero();
        return sum;
    }

    BigInteger operator- (const BigInteger& other, const BigInteger& other2) {
        BigInteger sum;
        if((other.sign>0 && other2.sign<0) || (other.sign<0 && other2.sign>0)){
            sum.sign = other.sign;
            sum.len = sum.absAdd(sum.data, other, other2);
            return sum;
        }

        int c = sum.absCompare(other, other2);
        if(c==0){ // return zero
            sum.sign = 1;
            sum.len=1;
            sum.data[0] = '0';
            sum.data[1] = '\0';
            return sum;
        }

        if(c>0){
            sum.sign = other.sign;
            sum.len = sum.absMinus(sum.data, other, other2);
            sum.trimHighZero();
            return sum;
        }

        sum.sign = -1 * other.sign;
        sum.len = sum.absMinus(sum.data, other2, other);
        sum.trimHighZero();
        return sum;
    }
}

int main() {
    pettystl::BigInteger bint1, bint2, bint3;
    std::cin >> bint1 >> bint2;
    bint3 = bint1 - bint2;
    std::cout << bint3 << std::endl;
    return 0;
}
