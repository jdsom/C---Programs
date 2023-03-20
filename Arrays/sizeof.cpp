#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //              variable, data type, class, objects, etc.

    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(bool) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}