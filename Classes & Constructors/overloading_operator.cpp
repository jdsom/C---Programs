#include <iostream>

class Pence{
    int m_pence;

    public:
        Pence(int pence) 
            : m_pence{pence} {}

        //friend Pence operator+(const Pence& p1, const Pence& p2);
        //friend Pence operator+(const Pence& p1, int value); // Overloaded operators     
        //friend Pence operator+(int p1, const Pence& p2);    // Parameters define which function is called
        
        //friend Pence operator-(const Pence& p1, const Pence& p2);

        int getPence() const {return m_pence;}
};

Pence operator+(const Pence& p1, const Pence& p2){
    return p1.getPence() + p2.getPence();
}

Pence operator+(const Pence& p1, int value){
    return p1.getPence() + value;
}

Pence operator+(int value, const Pence& p2){
    return value + p2.getPence();
}

Pence operator-(const Pence& p1, const Pence& p2){
    return p1.getPence() - p2.getPence();
}

int main(){
    int jordanPennies = 42; // declaring and initializing int
    int damlaPennies = 53;
    Pence pence1(10);       //invoking objects
    Pence pence2(21);

    Pence jordanSum(jordanPennies + pence2);    //calling overloaded operator to sum values
    Pence damlaSum(pence2 + damlaPennies);      // Two different functions being called

    Pence randoP(100);

    std::cout << "Jordan has " << jordanSum.getPence() << " in total." << std::endl;
    std::cout << "Damla has " << damlaSum.getPence() << " in total." << std::endl;;  

    Pence minusPence(randoP - pence1);
    std::cout << "The new sum of the No. of pennies from the random is is " 
        << minusPence.getPence() << "." << std::endl;
}