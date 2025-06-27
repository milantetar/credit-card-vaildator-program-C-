// credit card vaildator program C++.cpp 
#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string catdNumber);

int main()
{   
    std::string cardNumber;
    int result = 0;
    std::cout <<"Enter Your Credit card Number : "<<std::endl;
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber) ;
    return 0;
}

int getDigit(const int number)
{
    return 0;
}

int sumOddDigits(const std::string cardNumber)
{
    return 0;
}

int sumEvenDigits(const std::string catdNumber)
{
    int sum = 0;

    for (int i = catdNumber.size() - 2; i >= 0; i -= 2) 
    {
        sum += getDigit();

    }
    return 0;
}
