#include <iostream>
#include <cstdio>

#define BIG_INTEGET_MAX_LENGTH 1000
namespace pettystl {
    
    class BigInteger {
        private:
            char data[BIG_INTEGET_MAX_LENGTH];
            int len;
            int sign;

            void initData(char str[]){
                len = strlen(str);
                if(data != str){
                    std::memcpy(data, str, len);
                }
                std::reverse(data, data+len);
                sign = 1;
                if(str[len-1] == '+' || str[len-1] == '-'){
                    sign = str[len-1] == '-' ? -1 : 1;
                    len -- ;
                    data[len-1] = '\0';
                }
            }

        public:
            friend bool operator == (const BigInteger& other, const BigInteger& other2);

            friend std::ostream& operator << (std::ostream& os, const BigInteger& other);

            friend std::istream& operator >> (std::istream& is, BigInteger& other);

            friend BigInteger operator+ (const BigInteger& other, const BigInteger& other2);
    };

    bool operator == (const BigInteger& other, const BigInteger& other2){
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
        scanf("%s", other.data);
        other.initData(other.data);
        return is;
    }

    BigInteger operator+ (const BigInteger& other, const BigInteger& other2){
        int z = 0, a, b;
        BigInteger xy;
        xy.len = std::max(other.len, other2.len);
        xy.sign = 1;
        for (int i = 0; i<xy.len; i++)
        {
            if(i<other.len)
                a= other.data[i]-'0';
            else
                a=0;

            if(i<other2.len)
                b=other2.data[i]-'0';
            else
                b=0;

            xy.data[i] = (a+b+z)%10+'0';
            z=(a+b+z)/10;
        }
        if (z!=0)
        {
            xy.data[xy.len] = z+'0';
            xy.len ++;
        }
        return xy;
    }
}

int main(){
    pettystl::BigInteger bint1, bint2, bint3;
    std::cin >> bint1 >> bint2;
    bint3 = bint1 + bint2;
    std::cout << bint3 << std::endl;
    return 0;
}
