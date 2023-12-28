#include <iostream>

class MyClass{
    public:
        MyClass()
        {
            std::cout << "Default constuctor invoked" << std::endl;
        }
};

int main()
{
    MyClass o; // invoke a default constructor

    return 0;
}