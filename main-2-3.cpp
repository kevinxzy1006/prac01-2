#include <iostream>
#include "function-2-3.cpp"

int main() {
    int array[] = {2, 5, 9, 2, 9, 9, 5, 2, 9, 9, 9, 9, 9};
    int n = sizeof(array) / sizeof(array[0]);
    
    two_five_nine(array, n);

    return 0;
}
