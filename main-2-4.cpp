#include <iostream>
extern bool is_ascending(int array[], int n);

int main() {
    int array[5] = {1,2,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);
    is_ascending(array, n);

    return 0;
}
