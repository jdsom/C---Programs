#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age:";
    std::cin >> age;

    if (age > 18)
    {
        std::cout << "Welcome to the family";
    }
    else if (age < 0)
    {
        std::cout << "YOU ARE NOT EVEN BORN YET";
    }
    else
    {
        std::cout << "Sorry kid, you're too young.";
    }

    return 0;
}