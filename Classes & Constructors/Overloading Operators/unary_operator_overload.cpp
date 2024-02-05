#include <iostream>

class Pence{
    int m_pence;

    public:
        Pence(int pence=0.0)
            : m_pence{pence}{};

        Pence operator-() const; // not the same is binary - operator (i.e. 5 - 2)
                                 // used to make positive values negative
        
        Pence operator+() const;

        bool operator!() const;

        friend std::ostream& operator<<(std::ostream& out, const Pence& pence);

        int getPence(){return m_pence;}


};

std::ostream& operator<<(std::ostream& out, const Pence& pence){
    out << pence.m_pence;
    return out;
}

Pence Pence::operator-() const{ return -m_pence;}
Pence Pence::operator+() const{ return *this;} // operator+ does nlot make negative values positive
bool Pence::operator!() const{
    return (m_pence == 0.0);
}

std::string origin(const Pence pence){
    if (!pence)
        return "The value is set to the origin.\n";
    else
        return "The value is not set at the origin.\n";
}

int main(){

    const Pence p1{21};
    const Pence p2;
    const Pence p3{-33};
    std::cout << -p1 << std::endl;
    std::cout << +p3 << std::endl;

    std::cout << origin(p1);
    std::cout << origin(p2);
    
    
    return 0;
}