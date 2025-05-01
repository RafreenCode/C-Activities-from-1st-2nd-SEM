#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int newSize = 0;
char ask[50];

int* userInputArray(int size){
    int* array = (int*)calloc(size, sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    printf("Do you want to change the size of the array? Yes or No? ");
    scanf("%s", ask);

    if (strcmp(ask, "Yes") == 0){
        printf("Enter new size of array: ");
        scanf("%d", &newSize);

        if (newSize < size){
            array = (int *) realloc(array, newSize * sizeof(int));
            printf("You have shortened the array!\n");
            return array;
        }
    }

    else if (strcmp(ask, "No") == 0){
        newSize = size;
        printf("This is noted! Here is your array\n");
        return array;
    }

    array = (int *) realloc(array, newSize * sizeof(int));
    printf("Enter your new elements: ");
    for (int i = size; i < newSize; i++){
        scanf("%d", &array[i]);
    }

    return array;
    
}


int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array = userInputArray(size);
    
  
    printf("Your array is: ");
        for (int i = 0; i < newSize; i++){
            printf("%d ", array[i]);
        }

    free(array);
}