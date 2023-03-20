#include <iostream>

int main()
{

    std::string students[] = {"Jordan", "Sasha", "Damla", "Gloria", "Bugce"};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i] << "\n";
    }

    std::cout << '\n';

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << "\n";
    }
    return 0;
}