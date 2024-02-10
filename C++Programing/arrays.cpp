#include <iostream>

int main(){

    // arrays need to be of same data type
    std::string car[] = {"Corvette", "Mustang", "Camry"};
    std::cout << car[0] << '\n'; 

    // use of size of
    std::cout << sizeof(car)/sizeof(std::string) << " elements\n";

    // iterate through array
    for(int i = 0; i < sizeof(car)/sizeof(std::string); i++){
        std::cout << car[i] << '\n';
    }

    // foreach
    for(std::string car : car){
        std::cout << car << '\n';
    }

    // Fill
    const int SIZE = 99;

    std::string food[SIZE];
    fill(food, food+SIZE, "pizza");

    std::cout << food[0] << '\n';

    // Multi-arrays
    std::string cars[3][4] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram 1500"}};
    
    

    return 0;
}