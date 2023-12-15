#include <iostream>

int mysum (int, int);
int multiplereturns(int);
void helloworld();

int main(){

    int num1;
    int num2;
    int sum;

    std::cout << "Please enter a number: ";
    std::cin >> num1;
    std::cout << "Please enter a second number: ";
    std::cin >> num2;

    sum = mysum(num1,num2);

    std::cout << "The sum of these two numbers is: " << sum << "\n";
   
    helloworld();

    int num3;
    std::cout << "Please enter a value: "; 
    std::cin >> num3;
    std::cout << "The value entered above will be printed below if it was greater than 42.\n";
    std::cout << multiplereturns(num3);
}

int mysum(int x, int y){

    return x+y;
}

void helloworld(){
    std::cout << "Hello World!\n";
}

int multiplereturns(int x){
    if (x >= 42){
        return x;
    }
    return 0;
}
