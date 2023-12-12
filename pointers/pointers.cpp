#include <iostream>

int main(){

    char c = 'a';
    char* p = &c;
    
    std::cout << "The value of the dereferneced pointer is: " << *p;
}