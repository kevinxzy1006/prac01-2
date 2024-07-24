#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    std::unordered_map<int, int> frequency_map;

    // Calculate the frequency of each distinct element
    for (int i = 0; i < n; ++i) {
        frequency_map[array[i]]++;
    }

    double weighted_sum = 0;

    // Calculate the weighted sum
    for (const auto& element : frequency_map) {
        weighted_sum += element.first * element.second;
    }

    // Calculate the weighted average
    return weighted_sum / n;
}
