#include <iostream>

std::string concat(std::string string1, std::string string2);

int main()
{
    std::string first;
    std::string second;

    std::cout << "Enter your first name\n";
    std::getline(std::cin, first);
    std::cout << "Enter your last name\n";
    std::getline(std::cin, second);

    std::string fullName = concat(first, second);

    std::cout << "Your full name is " << fullName;
    return 0;
}

std::string concat(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}