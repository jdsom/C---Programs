#include <iostream>

int main(){

    int* p = new int;
    *p = 123;
    

    std::cout << "\nThe dynamic stoarage duration is: " << *p << "\n";
    delete p;
}