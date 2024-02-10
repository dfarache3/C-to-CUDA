#include <iostream>

int main() {

    std::string name = "Bro";
    std::string *pName = &name;

    //null pointer 
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "adress was not assigned \n";
        std::cout << *pointer;
    }
    else{
        std::cout << "adress was assigned \n";
    }

    return 0;
}