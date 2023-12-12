#include <iostream>

int main(){

    double arr[5] = {12.31, 21.34, 641.21, 131.422, 316.3421};
    arr[0] = 31.67;
    arr[4] = 99.99;

    std::cout << arr[0] << '\n' << arr[4];
}