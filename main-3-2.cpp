#include <iostream>
#include <algorithm> // for std::sort
#include "function-3-2.cpp"

using namespace std;

int main() {
    int array[9] = {1,2,6,4,9,8,8,2,0};
    int n = sizeof(array)/sizeof(array[0]);
    int median = median_array(array, n);

    return 0;
}