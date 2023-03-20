#include <iostream>

int main()
{

    // array = data stucture that can hold multiple values
    //          values are accessed by index number

    std::string cars[3];

    cars[0] = "Mercedes";
    cars[1] = "Audi";
    cars[2] = "BMW";
    std::cout << cars[0];
    std::cout << cars[1];
    std::cout << cars[2];
    std::cout << '/n';

    return 0;
}