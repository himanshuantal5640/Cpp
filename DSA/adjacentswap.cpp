#include <iostream>

void swapAdjacentEvenOdd(int arr[], int size) {
    for (int i = 0; i < size-1 ; i += 2) {
        // Swap arr[i] (even index) with arr[i + 1] (odd index)
        std::swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80,90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    swapAdjacentEvenOdd(arr, size);

    std::cout << "Array after swapping adjacent elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
