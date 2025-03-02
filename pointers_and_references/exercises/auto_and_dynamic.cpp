#include <iostream>

int main(){
    int x = 123; // automatic memory allocation (stack)
    int* y = new int; // dynamic memory allocation (heap)
    *y = x;           // initializing the value

    std::cout << "\nThe automatic storage duration is: " << x << " and the dynamic storage duration is: " << *y << std::endl;
    
    delete y;           // deallocating the memory for the dynamic memory allocation to prevent memory leaks.

}