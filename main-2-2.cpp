#include <iostream>
extern int max_element(int array[], int n);

int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int max_value = max_element(array, n);

    return 0;
}
