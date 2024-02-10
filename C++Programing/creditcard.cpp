#include <iostream>
//Program runs Luhn Algorithim

int getDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumOddDigit(cardNumber) + sumEvenDigit(cardNumber); 

    if (result % 10 == 0){
        std::cout << cardNumber << " is vald \n";
    }
    else{
        std::cout << cardNumber << " is not vald \n";
    }
    return 0; 
}

int getDigit(const int number){

    int sumDig = number % 10 + (number/10) % 10;

    return sumDig; 
}
int sumOddDigit(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum; 
}
int sumEvenDigit(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum; 
}
