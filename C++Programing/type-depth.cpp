#include <iostream>
#include <vector>

// Can not use both using and typedf in same namespace

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
//using number_t = int;

int main() {

    //pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 5;

    //std::cout << firstName << '\n';

    return 0;
}