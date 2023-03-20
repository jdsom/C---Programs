#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));

    int ranNum = rand() % 5 + 1;
    int guess;
    int tries = 0;

    std::cout << "A number has been randomly selected. Can you guess it? :\n";

    do
    {

        // std::cout << ranNum;
        std::cin >> guess;
        if (guess > ranNum)
        {
            std::cout << "too high.\n";
            tries++;
        }
        else if (guess < ranNum)
        {
            std::cout << "too low.\n";
            tries++;
        }
        else
        {
            tries++;
            std::cout << "Perfect, correct!\n The number of guesses you performed was " << tries << "\n";
        }
    } while (guess != ranNum);

    return 0;
}