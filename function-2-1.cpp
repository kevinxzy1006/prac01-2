#include <iostream>

int min_element(int array[], int n) {
    int min = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] > array[i+1]) {
            min = array[i+1];
        }
    }
    return min;
}
