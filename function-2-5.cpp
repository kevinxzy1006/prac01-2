#include <iostream>

bool is_descending(int array[], int n) {
    if (n > 0) {
        for(int i=0; i<n; i++) {
            if(array[i+1] < array[i] || array[i+1] == array[i]) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}
