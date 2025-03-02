#include <iostream>

class Pence
{
private:
    int m_pence;

public:
    Pence(int pence)
        : m_pence{ pence }
    {}

    friend bool operator== (const Pence& p1, const Pence& p2) { return p1.m_pence == p2.m_pence; }
    friend bool operator!= (const Pence& p1, const Pence& p2) { return !(operator==(p1, p2)); }

    friend bool operator< (const Pence& p1, const Pence& p2) { return p1.m_pence < p2.m_pence; }
    friend bool operator> (const Pence& p1, const Pence& p2) { return operator<(p2, p1); }

    friend bool operator<= (const Pence& p1, const Pence& p2) { return !(operator>(p1, p2)); }
    friend bool operator>= (const Pence& p1, const Pence& p2) { return !(operator<(p1, p2)); }

};

int main()
{
    Pence ten{ 10 };
    Pence five{ 5 };

    if (five > ten)
        std::cout << "a five pence is greater than a ten pence.\n";
    if (five >= ten)
        std::cout << "a five pence is greater than or equal to a ten pence.\n";
    if (five < ten)
        std::cout << "a ten pence is greater than a five pence.\n";
    if (five <= ten)
        std::cout << "a ten pence is greater than or equal to a five pence.\n";
    if (five == ten)
        std::cout << "a ten pence is equal to a five pence.\n";
    if (five != ten)
        std::cout << "a ten pence is not equal to a five pence.\n";

    return 0;
}