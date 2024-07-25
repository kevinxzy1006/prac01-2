#include <iostream>
extern double sum_even(double array[], int n);

int main() {
    double array[5] = {1.1 ,2.2, 3.3, 4.4, 5.5};
    int n = sizeof(array) / sizeof(array[0]);
    double sum = sum_even(array, n);

    return 0;
}
