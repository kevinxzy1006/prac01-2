#include <iostream>
#include "function-2-1.cpp"

using namespace std;

int main() {
    int array[] = {5, 3, 8, 1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    
    int result = min_element(array, n);
    cout << "Minimum element: " << result << endl;

    return 0;
}
