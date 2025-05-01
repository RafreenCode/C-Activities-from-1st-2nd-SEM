#include <stdio.h>
#include <stdlib.h>

// Comparison function for integers

/*int compare (const void int *a, const int void *b){
    return (*(int*)b - *(int *)a);
}

*/
int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int arr[] = {4, 2, 9, 1, 5, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    qsort(arr, arr_size, sizeof(int), compare); //qsort needs (arr, size, sizeof(int), compare);



    // Print the sorted array
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}