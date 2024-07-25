#include <iostream>
extern int min_element(int array[], int n);

int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int min_value = min_element(array, n);

    return 0;
}
