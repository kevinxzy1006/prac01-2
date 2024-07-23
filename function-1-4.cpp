#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
    int sumarray[] = {}; //set up an empty array to store the sum
    for(int i = 0; i < n; i++) {
        sumarray[i] = array[i] + secondarray[i];
    }
    return sumarray[n];
}
