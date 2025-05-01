#include <stdio.h>
#include <stdlib.h>

void findPeakElement(int *array, int size){

    for (int i = 0; i < size; i++){
        if (i == 0 && array[i] > array[i+1]){
            printf("%d ", i);
        }

        else if (i == size - 1 && array[i] > array[i-1]){
            printf("%d ", i);
        }
        
        else if (i > 0 && i < size - 1 && array[i] > array[i-1] && array[i] > array[i+1]){
            printf("%d ", i);
        }
    }

    return;
}

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

    findPeakElement(array, size);
}