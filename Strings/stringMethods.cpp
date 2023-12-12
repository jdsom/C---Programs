#include <iostream>
#include <string>
int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12)
    {
        std::cout << "Your name can't be more than 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    }

    return 0;
}