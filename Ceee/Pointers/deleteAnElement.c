#include <stdio.h>

// int index = -1;

    // for (int i = 0; i < *size; i++){
    //     if (arr[i] == target){
    //         index = i;
    //     }
    // }

    // if (!index){
    //     printf("The element is not found!");
    //     return;
    // }

    // for (int i = index; i < * size - 1; i++){
    //     arr[i] = arr[i + 1];
    // }

    // (*size)--;

void deleteByValue(int arr[], int *size, int target){
    int j = 0;
    for (int i = 0; i < *size; i++){
        if (arr[i] != target){
            arr[j++] = arr[i];
        }
    }

    *size = j;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int size = 7;

    deleteByValue(arr, &size, 3); // Remove value 3

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
