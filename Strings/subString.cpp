#include <iostream>
#include <string>

int main(){

    std::string s = "Hello World.";
    std::string subString = s.substr(6,5); //6 is the starting value, 5 is the range.

    std::cout << "The substring value is: '" << subString << "'.";
}