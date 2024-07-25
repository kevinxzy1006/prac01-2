#include <iostream>
extern int array_sum;

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int sum = array_sum(array, n);
    cout << sum << endl;

    return 0;
}
