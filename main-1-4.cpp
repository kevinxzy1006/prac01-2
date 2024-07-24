#include <iostream>

using namespace std;

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int n = sizeof(array1) / sizeof(array1[0]);
    
    int result = sum_two_arrays(array1, array2, n);
    cout << "Sum of two arrays: " << result << endl;

    return 0;
}
