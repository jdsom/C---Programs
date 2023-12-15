#include <iostream>

int main(){

    int x = 256;

    if (x >= 100 && x <= 300){
        std::cout << "The value is between 100 and 300.\n";
    }else{
        std::cout << "The value is not between 100 and 300.\n";
    }
    bool mycondition = true;
    if (mycondition || x >= 100){
        std::cout << "Either the value is greater than 100 or the bool is true.\n";
    }else{
        std::cout << "Either the value is less than 100 or the bool is false.\n";
    }

    bool secondCondition = !mycondition;
}