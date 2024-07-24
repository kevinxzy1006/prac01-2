#include <iostream>
#include <unordered_map>
#include "function-3-3.cpp"

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);

    double result = weighted_average(array, n);
    std::cout << "Weighted average: " << result << std::endl;

    return 0;
}
