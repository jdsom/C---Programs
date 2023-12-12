#include <iostream>
#include <string>

int main(){
    /*
    std::string s = "Hello World.";
    std::string subString = s.substr(6,5); //6 is the starting value, 5 is the range.

    std::cout << "The substring value is: '" << subString << "'.\n\n\n";
    */

    std::string s = "This is a Hello World string.";
    std::string stringtofind = "Hello";
    std::string::size_type found = s.find(stringtofind);

    if (found != std::string::npos)         //if found is not equal to std::string::npos
    {
        std::cout << "Substring found at position: " << found;  //output the position the substring was found else print this.
    }
    else{
        std::cout << "The substring is not found.";
    }
}