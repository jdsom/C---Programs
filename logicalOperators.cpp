#include <iostream>

int main()
{
    int temp = 50;
    bool sunny = false;

    if (temp >= 0 && temp <= 15)
    {
        std::cout << "I guess today is not that hot...\n";
    }
    else if (temp >= 15)
    {
        std::cout << "IT'S FREEZING!\n";
    }

    if (sunny)
    {
        std::cout << "Suns out, lets go to the beach!\n";
    }
    else
    {
        std::cout << "It's too cold to go anywhere.\n";
    }
    return 0;
}