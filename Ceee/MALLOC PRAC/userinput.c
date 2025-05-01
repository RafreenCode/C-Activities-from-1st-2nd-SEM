#include <stdio.h>
#include <stdlib.h>

int userInputArray(int size){
    int* array = (int*)calloc(size, sizeof(int));
    int sum = 0;

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }

    return sum;
}


int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array;

    printf("Sum of arrays: %d", userInputArray(size));

    free(array);
}