#include <iostream>

int max_element(int array[], int n) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] > array[i+1]) {
            max = array[i];
        }
    }
    return max;
}
