#include <iostream>

void swap(std::string &x, std::string &y);

int main(){

    std::string x = "Cheese";
    std::string y = "Pie";

    swap(x, y);

    std::cout << "X : " << x << '\n';
    std::cout << "Y : " << y << '\n';
    return 0;
}


void swap(std::string &x, std::string &y){  //The & allows you to pass by Reference as locates the variable at the referenced location rather than creating a copy of the 2 arguments

    std::string temp;
    temp = x;
    x = y;
    y = temp;
}