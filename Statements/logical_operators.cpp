#include <iostream>

int main(){

    bool a = true;
    bool b = true;
    if (a && b){
        std::cout << "The entire condition is true.\n";
    }else{
        std::cout << "The entire condition is false.\n";
    }

    bool c = true;
    bool d = false;
    if (c || d){
        std::cout << "The entire or some of the condition is true.\n";
    }else{
        std::cout << "The entire statement is false.\n";
    }

    bool e = true;
    if (!e){
        std::cout << "The condition is true.\n";
    }else{
        std::cout << "The condition is false.\n";
    }
}