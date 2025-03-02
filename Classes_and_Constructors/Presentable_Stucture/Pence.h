#pragma once
class Pence{                            // creating a class
    int m_pence;                        // private data member
    public:
        Pence(int pence)                // class constructor
            : m_pence{pence} {}
    
    int getPence() const {return m_pence;}  // member function
    
};

Pence operator+(const Pence& p1, const Pence& p2); // overloaded function declaration

