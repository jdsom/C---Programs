#include <iostream>

int main(){

    char c = 'a'; // declared and initialized variable.
    char* address = &c;  //* makes it a pointer, = &c means the pointer is pointing towards the address of variable c    
    char p = *address;       //p is equal to the pointer pointing to the address of variable c
    
    std::cout << "The value of variable named p: " << *address << "\n"; // *address is pointing to the value in the location of the address
}