#include <iostream>

int main(){

    double mydouble = 23.45;
    double& myreference = mydouble;

    myreference = 27.34;

    std::cout << "The value of mydouble is " << mydouble << "\n";
    std::cout << "The value of myreference is " << myreference << "\n";

    mydouble = 21.21;

    std::cout << "The value of mydouble is " << mydouble << "\n";
    std::cout << "The value of myreference is " << myreference << "\n";
}