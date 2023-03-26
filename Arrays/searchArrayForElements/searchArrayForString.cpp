#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main()
{

    std::string foods[] = {"pizza", "chicken", "icecream", "pasta"};
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    std::string myElement;

    std::cout << "Enter element to search for: \n";
    std::getline(std::cin, myElement);

    index = searchArray(foods, size, myElement);
    if (index != -1)
    {
        std::cout << myElement << " is in position " << index << "\n";
    }
    else
    {
        std::cout << myElement << "is not in the array.\n";
    }
    return 0;
}

int searchArray(std::string array[], int size, std::string element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}