#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;
typedef unsigned char byte;

struct BigInteger
{
    byte data[3010];
    int len;
};

bool isZero(BigInteger & bi){
    return bi.len == 0 || (bi.len==1 && bi.data[0] == 0);
}

void trimHighZero(BigInteger & bi)
{
    while (bi.len > 1 && bi.data[bi.len - 1] == 0)
    {
        bi.len--;
    }
}

int absCompare(const byte *bint1, int bint1L, const byte *bint2, int bint2L)
{
    if (bint1L > bint2L)
        return 1;
    if (bint1L < bint2L)
        return -1;
    for (int i = bint1L - 1; i >= 0; i--)
    {
        if (bint1[i] > bint2[i])
            return 1;
        if (bint1[i] < bint2[i])
            return -1;
    }
    return 0;
}

int absMinus(byte dest[], const BigInteger &other, const BigInteger &other2)
{
    int z = 0;
    int len = other.len; // bint1 >= bint2
    for (int i = 0; i < len; i++)
    {
        int a = 0, b = 0;
        if (i < other.len)
            a = other.data[i];

        if (i < other2.len)
            b = other2.data[i];

        if (a + z < b)
        {
            dest[i] = (10 + a + z - b);
            z = -1;
        }
        else
        {
            dest[i] = (a + z - b);
            z = 0;
        }
    }
    dest[len] = 0;
    return len;
}

string toString(BigInteger bi)
{
    char str[3010];
    int pos = 0;
    for (int i = bi.len - 1; i >= 0; i--)
    {
        str[pos++] = bi.data[i] + '0';
    }
    str[pos++] = '\0';
    string s = str;
    return s;
}

BigInteger fromString(const string str)
{
    BigInteger bi;
    bi.len = str.length();
    int bPos = 0;
    int n = 0;
    for (int i = str.length() - 1; i >= bPos; i--)
    {
        bi.data[n++] = str[i] - '0';
    }
    bi.data[bi.len] = 0;
    trimHighZero(bi);
    return bi;
}

int absDivideOneStep(byte dest[], int len, const BigInteger& other, const BigInteger &other2)
{
    int result = 0;
    while (absCompare(dest, len, other2.data, other2.len) >= 0)
    {
        absMinus(dest, other, other2);
        if (dest[len - 1] == 0)
            len--;
        result++;
    }
    return result;
}

BigInteger operator%(const BigInteger &other, const BigInteger &other2)
{
    BigInteger remainder;
    remainder.len = other.len;
    memcpy(remainder.data, other.data, 3010);
    int resLen = other.len - other2.len + 1;
    if (resLen < 1)
        return remainder;

    for (int i = resLen - 1; i >= 0; i--)
    {
        int dataLen = other2.len;
        if (remainder.data[i + other2.len] > 0)
        {
            dataLen++;
        }
        absDivideOneStep(remainder.data + i, dataLen, remainder, other2);
    }
    trimHighZero(remainder);
    return remainder;
}

int main()
{
    string str;
    cin >> str;
    BigInteger bit1 = fromString(str);
    cin >> str;
    BigInteger bit2 = fromString(str);

    while(! isZero(bit2)){
        BigInteger temp = bit1 % bit2;
        bit1 = bit2;
        bit2 = temp;
    }
    str = toString(bit1);
    cout << str << endl;
    return 0;
}
