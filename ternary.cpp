#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expressions2;
    int grade;

    std::cout << "What was your grade?\n";
    std::cin >> grade;
    grade > 60 ? std::cout << "You pass!" : std::cout << "You fail.";

    bool hungry = true;

    hungry ? std::cout << "You're hungry!" : std::cout << "You're full.";

    std::cout << (hungry ? "You are hungry." : "You are full");
    return 0;
}