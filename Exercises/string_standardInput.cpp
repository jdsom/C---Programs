#include <iostream>
#include <string>

int main(){

    std::string first;
    std::string last;
     
    std::cout << "What is your first name: ";
    std::getline(std::cin, first);
    std::cout << "What is your last name: ";
    std::getline(std::cin, last);

    std::string fullname = first + " " + last;
    
    std::cout << "Your full name is " << fullname << ".\n";
    

}