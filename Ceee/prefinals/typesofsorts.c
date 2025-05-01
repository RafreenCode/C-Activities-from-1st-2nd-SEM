#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void selection(int* array, int size){
    //SELECTION//
    for (int i = 0; i < size - 1; i++){
        int minIndex = i;

        for (int j = i + 1; j < size; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
            }
        }

        if (minIndex != i){
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }

        printf("Pass %d: ", i + 1);

            for (int i = 0; i < size; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
    }
}

void bubble(int* array, int size){
    //BUBBLE//
    for (int i = 0; i < size - 1; i++){
        for (int j = size - 1; j > i; j--){
            if (array[j] < array[j-1]){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
        printf("Pass %d: ", i + 1);

            for (int i = 0; i < size; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
    }

    
}

void insertion(int* array, int size){
    //INSERTION//
    bool location;
    for (int i = 1; i < size; i++){
        int temp = array[i];
        location = false;

        for (int j = i - 1; j >= 0 && !location;){
            if (temp < array[j]){
                array[j+1] = array[j];
                j--;
            }

            else {
                array[j+1] = temp;
                location = true;
            }

            if (!location){
                array[j+1] = temp;
            }
        }

        printf("Pass %d: ", i);
            for (int i = 0; i < size; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
    }
}

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int temp[size];

    for (int i = 0; i < size; i++){
        temp[i] = array[i];
    }
    
    printf("The sorted array is:\n");

    printf("Bubble sort:\n");
    bubble(array, size);

    for (int i = 0; i < size; i++){
        array[i] = temp[i];
    }

    // printf("The resetted array is:\n");

    // for (int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }

    printf("\n");

    printf("Selection sort:\n");
    selection(array, size);
    printf("\n");

    for (int i = 0; i < size; i++){
        array[i] = temp[i];
    }

    printf("Insertion sort:\n");
    insertion(array, size);
    printf("\n");

    // for (int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }
}