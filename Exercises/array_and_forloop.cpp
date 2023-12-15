#include <iostream>

int main(){
    int arr[5] = {3, 5, 7, 2, 3};
    for(int i = 0; i < 5; i++){
        std::cout << "In position " << i << " of the array is the value " << arr[i] << ".\n";
    }
}