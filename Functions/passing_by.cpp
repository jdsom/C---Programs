#include <iostream>

void passByValueFunc(int refer); //passing by value creates a copy of the value and doesn't modify the original
void referenceFunc(int &refer); //passing by function allows the value to be modified

int main(){

    int value = 5;
    passByValueFunc(value);

    // The value variable remains unchanged
    std::cout << "Value after function call: " << value << "\n";

    referenceFunc(value);

    // The value variable has been modified within the function
    std::cout << "Value after function call: " << value << "\n";
}

void passByValueFunc(int refer) {
    refer++;
    std::cout << "Argument passed by value: " << refer << "\n";
}

void referenceFunc(int &refer) {
    refer++;
    std::cout << "Argument passed by reference in the argument list: " << refer << "\n";
}