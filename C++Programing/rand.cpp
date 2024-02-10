#include <iostream>

int main() {
    
    //srand enables on to receive "random number" (depends on seed)
    srand(time(NULL));

    int num = rand();

    std::cout << num;

    return 0;
}