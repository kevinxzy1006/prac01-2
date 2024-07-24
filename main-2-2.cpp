#include <iostream>
#include "function-2-2.cpp"

using namespace std;

int main() {
    int array[] = {5, 3, 8, 1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    
    int result = max_element(array, n);
    cout << "Maximum element: " << result << endl;

    return 0;
}
