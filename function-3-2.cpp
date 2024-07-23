#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int median_array(int array[], int n) {
    if(n%2 == 0 || n < 1) {
        return 0;
    }

    //sort the array
    sort (array, array + n);

    //return the median
    return array[n/2];
}
