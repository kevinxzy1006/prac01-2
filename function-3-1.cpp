#include <iostream>

bool is_fanarray(int array[], int n) {
    if(n<1) {
        return false;
    } else {
        for(int i=0; i<n; i++) {
            if(array[i] = array[n-i]) {
                return true;
            } else {
                return false;
            }
        }
    }
}
