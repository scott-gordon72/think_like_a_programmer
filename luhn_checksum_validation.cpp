#include <iostream>
using namespace std;

int doubleDigitValue(int digit)
{
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10)
        sum = 1 + doubledDigit % 10;
    else
        sum = doubledDigit;
    return sum;
}

int main(int argc, char const *argv[])
{
    
}
