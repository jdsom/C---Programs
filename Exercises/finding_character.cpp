#include <iostream>
#include <string>

int main(){

    std::string mainString = "Hello C++ World.";
    std::string subString = "C++";
    auto mysubstringfound = mainString.find(subString);

    if (mysubstringfound != std::string::npos){

        std::cout << "The substring of the main string is " << subString << "\n";
    }else{
        std::cout << "We were not able to find the substring.\n";
    }
}