#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sorter(int *array, int size, int k){
    bool location;

    // for (int i = 1; i < size; i++){
    //     int temp = array[i];
    //     location = false;

    //     for (int j = i - 1; j >= 0 && !location;){
    //         if (temp < array[j]){
    //             array[j+1] = array[j];
    //             j--;
    //         }

    //         else {
    //             array[j+1] = temp;
    //             location = true;
    //         }

    //         if (!location){
    //             array[j+1] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if (abs(array[j] - k) > abs(array[j+1] - k)){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


int main (){
    int size, k;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the subtrahend: ");
    scanf("%d", &k);
    
    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    printf("The sorted absolute difference of the array and k is: ");

    sorter(array, size, k);

    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}