#include "Pence.cpp"
#include <iostream>

int main(){
    
    Pence jordanMoney(51);
    Pence saidPence(21);

    Pence totalPence(jordanMoney + saidPence);

    std::cout << "The total pennies when combining said and jordan's together is " 
        << totalPence.getPence() << " pennies." << std::endl;

    return 0;
}