#include <iostream>
#include "function-2-2.cpp"

int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int max_value = max_element(array, n);

    return 0;
}