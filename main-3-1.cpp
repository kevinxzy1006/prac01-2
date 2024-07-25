#include <iostream>
extern bool is_fanarray(int array[], int n);

int main() {
    int array[9] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    is_fanarray(array, n);

    return 0;
}
