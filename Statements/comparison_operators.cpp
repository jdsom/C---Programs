#include <iostream>

int main(){

    int x = 345;
    if (x == 5){
        std::cout << "The value of x is equal to 5.\n";
    }else if (x >= 5 && x <=50){
        std::cout << "The value of x is between 5 and 50.\n";
    }else if (x >= 0 && x <= 5){
        std::cout << "The number is between 0 and 5 .\n";
    }else{
        std::cout << "The value of x is higher than 100.\n";
    }
    
    int y = 324;
    bool a = false;
    if (y >= 5 && a){
        std::cout << "Y is greater than 5 and a is true.\n";
    }else if (y >= 5 && !a){
        std::cout << "Y is greater than 5 but a is false.\n";
    }

    int z = 0;
    if (z){
        std::cout << "The condition is true.\n";
    }else{
        std::cout << "The condition is false.\n";
    }
}