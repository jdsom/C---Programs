#include <iostream>

class Digit{
    int m_digit;
    public:
        Digit(int digit=0)
            : m_digit{digit} {}
        
        Digit& operator++();
        Digit& operator--();

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

std::ostream& operator<<(std::ostream& out, const Digit& digit){
    out << digit.m_digit;

    return out;
}

int main(){
    Digit digit = 8;

    std::cout << digit;
    std::cout << ++digit;
    std::cout << --digit;
    std::cout << --digit;
    std::cout << --digit;
    return 0;
}