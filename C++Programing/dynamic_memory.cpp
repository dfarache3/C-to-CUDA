#include <iostream>

int main() {

    // Base use of dynaimc memory and pointer
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    std::cout << "adress: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; 

    // Create adjustable size
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size; 

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;


    return 0; 
}