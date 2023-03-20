#include <iostream>

int main()
{

    for (int i = 1; i <= 20; i++)
    {
        std::cout << i << "\n";
        if (i % 2 == 0 && i == 8)
        {
            break;
        }
    }
    std::cout << "Happy new year!";
    return 0;
}