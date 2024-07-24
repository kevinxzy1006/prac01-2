bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    // Check if the array is a palindrome
    for (int i = 0; i < n / 2; ++i) {
        if (array[i] != array[n - i - 1]) {
            return false;
        }
    }

    // Check if the array is in ascending order from the start to the middle element
    for (int i = 0; i < n / 2 - 1; ++i) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }

    return true;
}
