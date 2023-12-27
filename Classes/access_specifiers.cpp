class MyClass
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
class MyClass
{
    // everything in here
    // has PRIVATE access BY DEFAULT
};

struct MyStruct
{
    // everything in here
    // has PUBLIC access BY DEFAULT
};
