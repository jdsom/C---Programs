#include <iostream>

int doubleNumber(int x); //function declaration


int main(){

    int num;
    std::cout << doubleNumber(2) << std::endl;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    std::cout << doubleNumber(num) << std::endl;
}

int doubleNumber(int x){
    return x*2;
}