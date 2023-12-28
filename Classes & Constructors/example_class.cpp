#include <iostream>

class myClass{
    char c;
    int x;
    double d;

    void dosomething();
    void dosomethingelse();

};

void myClass::dosomething()
{
    std::cout << "Hello world my a class called myClass.\n";
}

void dosomethingelse()
{
    std::cout << "Hello this is another class from myClass.\n";
}