#include <iostream>
#include "function-1-4.cpp"

int main() {
    int array[5] = {1,2,3,4,5};
    int secondarray[5] = {6,7,8,9,0};
    int n = sizeof(array)/sizeof(array[0]);
    int secondn = sizeof(secondarray)/sizeof(secondarray[0]);
    if(n == secondn) {
        int sumarray = sum_two_arrays(array, secondarray, n);
    } else {
        std::cout << "Error: The size of two array are not equal." << std::endl;
    }
    return 0;
}