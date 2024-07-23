#include <iostream>
#include "function-1-1.h"

using namespace std;

int array_sum(int array[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum = sum + array[i];
    }
    return sum;
}

