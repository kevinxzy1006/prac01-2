#include <iostream>

bool is_ascending(int array[], int n) {
    for(int i=0; i<n; i++) {
        if(array[i+1] > array[i] || array[i+1] == array[i]) {
            return true;
        } else {
            return false;
        }
    }
}