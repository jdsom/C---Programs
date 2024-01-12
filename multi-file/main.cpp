#include <iostream>
#include "input.cpp"

int getInteger();

int main(){
    int x = getInteger();
    int y = getInteger();

    std::cout << "X + Y equals: " << x+y << ".\n";
    return 0;
}