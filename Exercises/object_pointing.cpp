#include <iostream>

int main(){

    double x = 21.51;
    double* pX = &x;

    std::cout << "The value of the object is: " << *pX << "\n";
}