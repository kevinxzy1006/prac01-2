#include <iostream>
extern int num_count(int array[], int n, int number);

using namespace std;

int main() {
    int array[7] = {1, 2, 3, 2, 5, 2, 7}; // Example array
    int n = sizeof(array) / sizeof(array[0]);
    int number = 0;
    int count = num_count(array, n, number);

    return 0;
}
