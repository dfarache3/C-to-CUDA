#include <iostream>
#include <vector>

int main() {

    std::string name;
    int age;

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is: " << age << '\n';

    return 0;
}