#include <iostream>

double array_mean(int array[], int n) {
    double ave = 0.0;
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum = sum + array[i];
        ave = sum/n;
    }
    return ave;
}
