#include <iostream>
#include "function-3-1.cpp"

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    std::cout << "Array {1, 2, 3, 2, 1} is a fan array: " << is_fanarray(array1, n1) << std::endl;

    int array2[] = {2, 4, 4, 2};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    std::cout << "Array {2, 4, 4, 2} is a fan array: " << is_fanarray(array2, n2) << std::endl;

    int array3[] = {1, 2, 1, 2, 1};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    std::cout << "Array {1, 2, 1, 2, 1} is a fan array: " << is_fanarray(array3, n3) << std::endl;

    int array4[] = {1, 3, 5, 4, 2};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    std::cout << "Array {1, 3, 5, 4, 2} is a fan array: " << is_fanarray(array4, n4) << std::endl;

    return 0;
}
