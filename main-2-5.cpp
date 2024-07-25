#include <iostream>
extern bool is_descending(int array[], int n);

int main() {
    int array[10] = {9,8,7,7,6,5,5,4,3,8};
    int n = sizeof(array) / sizeof(array[0]);
    is_descending(array, n);

    return 0;
}
