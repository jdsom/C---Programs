#include <iostream>

void custommessage(const std::string&); //declared

int main(){

    std::string message = "Hello, this is the custom message.\n";
    custommessage(message); //calling the function
}

void custommessage(const std::string& custom) //defined function
{
    std::cout << custom;
}