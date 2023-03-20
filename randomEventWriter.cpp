#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You won a £20 gift card.\n";
        break;
    case 2:
        std::cout << "You won a £50 gift card.\n";
        break;
    case 3:
        std::cout << "You won a £100 gift card!\n";
        break;
    case 4:
        std::cout << "You won a £10000 gift card.\n";
        break;
    case 5:
        std::cout << "HOLY MOLY YOU WON 1 MILLION POUNDS\n";
        break;
    }
    return 0;
}