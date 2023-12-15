#include <iostream>

int divison(int, int);
double division(double, double);

int main(){

    double a = 27;
    double b = 8;

    std::cout << division(a, b);

}

int divison(int x, int y){
    return x/y;
}
double division(double x, double y){
    return x/y;
}