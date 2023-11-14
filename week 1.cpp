#include <iostream>

void findMinMax(int arr[], int size, int &min, int &max) {
    min = max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i]; 
        } else if (arr[i] > max) {
            max = arr[i]; 
        }
    }
}

int main() {
    const int size = 5; 
    int arr[size];

    std::cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, size, min, max);

    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}

