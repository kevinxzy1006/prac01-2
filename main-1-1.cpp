#include <iostream>
extern int array_sum;

using namespace std;

int array_sum(int array[], int n);
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << array_sum(array, n) << endl;

    return 0;
}
