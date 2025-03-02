#include <iostream>

class MyClass{
    public:
        int x, y;

        MyClass(int xx, int yy)
            : x{xx}, y{yy} // member initializer list
        {
            std::cout << "User defined constructor.\n";
        }
};

int main()
{
    MyClass o{1, 2}; // invoke a user-provided constructor
    std::cout << o.x << ' ' << o.y;
    return 0;
}