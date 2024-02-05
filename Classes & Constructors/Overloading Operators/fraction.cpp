#include <iostream>
#include <numeric>

class Fraction{
    int m_numerator=0;
    int m_denominator=1;
    public:
        Fraction(int numerator=0, int denominator=1)
            : m_numerator{numerator}, m_denominator{denominator} {
            // We put reduce() in the constructor to ensure any new fractions we make get reduced!
		    // Any fractions that are overwritten will need to be re-reduced
            reduce();
            }
            
        
        void reduce()
	{
		int gcd = std::gcd(m_numerator, m_denominator);
		if (gcd){
			m_numerator /= gcd;
			m_denominator /= gcd;
		}
	}

        friend Fraction operator*(const Fraction& f1, const Fraction& f2);
        //friend Fraction operator*(const Fraction& f1, int value);
        //friend Fraction operator*(int value, const Fraction f2);
        friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
        friend std::istream& operator>>(std::istream& out, Fraction& f1);
        
        void print(){
            std::cout << m_numerator << '/' << m_denominator << std::endl;
        }
};

Fraction operator*(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.m_numerator * f2.m_numerator , f1.m_denominator * f2.m_denominator);
}

std::ostream& operator<<(std::ostream& out, const Fraction& f1){
    out << f1.m_numerator << "/" << f1.m_denominator;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f1){
    std::cout << "Enter the Numerator: ";
    in >> f1.m_numerator;
    std::cout << "Enter the Denominator: ";
    in >> f1.m_denominator;
    return in;
}

//Fraction operator*(const Fraction& f1, int value){
//    return Fraction(value * f1.m_numerator , f1.m_denominator);
//}

//Fraction operator*(int value, const Fraction f2){
//    return Fraction(value * f2.m_numerator , f2.m_denominator);
//}

int main()
{

    Fraction f1;
    std::cin >> f1;
    Fraction f2;
    std::cin >> f2;

    std::cout << f1 << " * " << f2 << " = " << f1*f2 << std::endl;
    // Fraction f1{2, 5};
    // f1.print();

    // Fraction f2{3, 8};
    // f2.print();

    // Fraction f3{ f1 * f2 };
    // f3.print();

    // Fraction f4{ f1 * 2 };
    // f4.print();

    // Fraction f5{ 2 * f2 };
    // f5.print();

    // Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
    // f6.print();

    return 0;
}