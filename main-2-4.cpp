#include <iostream>
#include "function-2-4.cpp"

int main() {
    int array[5] = {1,2,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);
    is_ascending(array, n);

    return 0;
}