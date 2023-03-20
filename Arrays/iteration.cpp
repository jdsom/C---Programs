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

    std::cout << '\n';
    std::cout << "The following is a foreach loop rather than a for loop.\n";

    int marks[] = {65, 72, 81, 94};
    // For each loop
    for (std::string student : students)
    {
        std::cout << student << '\n';
    }

    std::cout << '\n';

    for (int mark : marks)
    {
        std::cout << mark << '\n';
    }
    return 0;
}