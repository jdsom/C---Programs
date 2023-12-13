#include <iostream>
#include <string>

int main(){

    std::string mainstring = "Jordan Sommerville";
    std::string first = mainstring.substr(0,6);
    std::string last = mainstring.substr(7,11);

    std::cout << "Main string is: " << mainstring << ".\n";
    std::cout << "first substring is: " << first << ".\n";
    std::cout << "last substring is: " << last << ".\n";
}