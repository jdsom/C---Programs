#include <iostream>

int main(){
    int x = 123;
    int* y = new int;
    *y = 456;

    std::cout << "\nThe automatic storage duration is: " << x << " and the dynamic storage duration is: " << *y << std::endl;
    
    delete y;

}