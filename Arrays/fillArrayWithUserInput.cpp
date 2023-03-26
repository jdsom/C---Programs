#include <iostream>

int main()
{
    std::string temp;
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter food you like: #" << i << ": ";
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You like the follow food(s):\n";

    for (int i = 0; !foods[i].empty(); +i++)
    {
        std::cout << foods[i] << '\n';
    }
    return 0;
}