#include <iostream>

int main(){

    int x = 123;
    int& y = x;

    std::cout << y << "\n";

    y = 234;

    std::cout << y << "\n";

}