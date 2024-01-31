#include <iostream>

class Pence
{
private:
    int m_pence{};

public:
    Pence(int cents)
        : m_pence { cents } { }

    // Overload Cents + int
    Pence operator+(int value) const;

    int getPence() const { return m_pence; }
};

// note: this function is a member function!
// the cents parameter in the friend version is now the implicit *this parameter
Pence Pence::operator+ (int value) const
{
    return Pence { m_pence + value };
}

int main()
{
	const Pence pence1 { 6 };
	const Pence pence2 { pence1 + 2 };
	std::cout << "I have " << pence2.getPence() << " pence.\n";

	return 0;
}