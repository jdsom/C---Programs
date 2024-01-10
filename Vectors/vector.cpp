#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<int> numbers;
    // numbers.push_back(21);

    for(int i = 1; i < 10; i++){
        numbers.push_back(i);
    }

    /*for(int number : numbers){
        std::cout << number << "\n";
    }*/

    for(auto it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << "\n";
    }   // *it is value of element
        // &it is the address of iterator
        // &(*it) is the address of the element
        /* cbegin() = constant, cend() = constant,
        these would be used when you don't want to change the variables */
    auto it = numbers.begin();
    std::cout << *(it + 5); //this moves 5 postions from the begining therefore output is 6
    return 0;
}