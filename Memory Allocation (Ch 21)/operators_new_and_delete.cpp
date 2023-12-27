#include <iostream>

int main(){

    int* p = new int;
    *p = 123;
    std::cout << "The pointed-to value is: " << *p;
    delete p;

    int* z = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    std::cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2];
    delete[] p;
}