#include <iostream>

class Digit{
    int m_digit;
    public:
        Digit(int digit=0)
            : m_digit{digit} {}
        
        Digit& operator++(); // prefix has no parameter
        Digit& operator--();

        Digit operator++(int); // postfix has an int parameter
        Digit operator--(int);
        friend std::ostream& operator<<(std::ostream& out, const Digit& digit);
}; 

Digit& Digit::operator++(){

    if (m_digit == 9)
            m_digit = 0;
    else
        ++m_digit;
    
    return *this;
}

Digit& Digit::operator--(){

    if (m_digit == 0)
            m_digit = 9;
    else
        --m_digit;
    
    return *this;
}

// int parameter means this is postfix operator++
Digit Digit::operator++(int)
{
    // Create a temporary variable with our current digit
    Digit temp{*this};

    // Use prefix operator to increment this digit
    ++(*this); // apply operator

    // return temporary result
    return temp; // return saved state
}

// int parameter means this is postfix operator--
Digit Digit::operator--(int)
{
    // Create a temporary variable with our current digit
    Digit temp{*this};

    // Use prefix operator to decrement this digit
    --(*this); // apply operator

    // return temporary result
    return temp; // return saved state
}

std::ostream& operator<<(std::ostream& out, const Digit& digit){
    out << digit.m_digit;

    return out;
}

int main(){
    Digit digit = 5;

    std::cout << digit;
    std::cout << ++digit; // calls Digit::operator++();
    std::cout << digit++; // calls Digit::operator++(int);
    std::cout << digit;
    std::cout << --digit; // calls Digit::operator--();
    std::cout << digit--; // calls Digit::operator--(int);
    std::cout << digit;
    return 0;
}