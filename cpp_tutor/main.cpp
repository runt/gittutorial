#include <iostream>
#include "intarray.h"

int main(int, char**){

    IntArray myArray{1000};
    
    int * arr = new int[3];

    arr[0] = 1;

    for (uint8_t i=0; i < 3; i++){
        *(arr + i) = i+1;
    }

    std::cout << "Hello, from cleanc1!\n";
    std::cout << arr << std::endl;
}