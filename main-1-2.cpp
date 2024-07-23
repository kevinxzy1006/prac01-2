#include <iostream>
#include "function-1-2.cpp"

using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int n = sizeof(array)/sizeof(array[0]);
    double ave = array_mean(array, n);
    cout << ave << endl;

    return 0;
}