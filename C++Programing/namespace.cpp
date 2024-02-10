#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    // Standard output method
    int x = 0;

    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    std::cout << x << std::endl;

    //using namepsace
    x = 1;
    using namespace first;

    std::cout << x << std::endl; 

    //no stds
    using namespace std;

    cout << x;
    
}