#include <iostream>

void happyBirthday(std::string name, int age) // function = a block of reusable code.
{
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday dear " << name << ",\n";
    std::cout << "Happy birthday to you!\n\n";
    std::cout << "You are " << age << " years old.\n";
}

int main()
{
    int age;
    std::string name;
    std::cout << "What's your name?: \n";
    std::getline(std::cin, name);
    std::cout << "How old are you?: \n";
    std::cin >> age;
    happyBirthday(name, age);
    return 0;
}