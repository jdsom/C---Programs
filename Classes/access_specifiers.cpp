#include <iostream>

class MyExampleClass
{
public:

// everything in here
    // has public access level
protected:
    // everything in here
    // has protected access level
private:
    // everything in here
    // has private access level
};
    // The default visibility/access specifier for a class is private if none of the access specifiers is present:
class MyExampleClass
{
    // everything in here
    // has PRIVATE access BY DEFAULT
};

struct MyStruct
{
    // everything in here
    // has PUBLIC access BY DEFAULT
};


class MyClass
{
private:
    int x;
public:
    void printx()
    {
        std::cout << "The value of x is:" << x; // x is accessible to printx() 
        }
};

int main() {
    MyClass o; // Create an object
    o.x = 123; // Error, x has private access and is not accessible to
                // object o
    o.printx(); // printx() is accessible from object o

}
