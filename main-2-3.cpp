#include <iostream>
extern void two_five_nine(int array[], int n);

using namespace std;

int main() {
    int array[10] = {2,2,5,5,9,9,2,5,8,0};
    int n = sizeof(array)/sizeof(array[0]);
    two_five_nine(array, n);

    return 0;
}

