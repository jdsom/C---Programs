#include <iostream>
#define NAME_JORDAN "Jordan"

int main(){

    #ifdef NAME_JORDAN
        std::cout << "My name is " << NAME_JORDAN << "\n";
    #endif
    
    #ifndef NAME_JACKSON 
        std::cout << "My name is Jackson was not defined so this has been printed.\n";
    #endif

    return 0;
}