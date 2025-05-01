#include <stdio.h>

void rotateArray(int *array, int size, int rotations){
    int temp;

    for (int i = 0; i < rotations; i++){
        temp = array[size - 1];
        for (int j = size - 1; j > 0; j--){
            array[j] = array[j - 1]; 
        }
        
        array[0] = temp;
    }
}

int main (){
    int size, rotations;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the amount of rotations: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

    rotateArray(array, size, rotations);
}