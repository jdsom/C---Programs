#include <iostream>

int multiplication(int, int);

int main(){

    int result = multiplication(5, 5);
    std::cout << result << "\n";
}

int multiplication(int x, int y){

    return x*y;
}