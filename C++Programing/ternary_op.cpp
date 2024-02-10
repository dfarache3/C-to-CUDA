#include <iostream>

int main() {
    int grade = 75;

    // condition ? expression 1 : expression 2
    (grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail";

    return 0;
}