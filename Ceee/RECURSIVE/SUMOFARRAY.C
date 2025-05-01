#include <stdio.h>

int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0; // Base case: empty array, sum is 0
    }
    return arr[size - 1] + sumArray(arr, size - 1); // Sum last element + recursive call
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array: %d\n", sumArray(arr, size));

    return 0;
}