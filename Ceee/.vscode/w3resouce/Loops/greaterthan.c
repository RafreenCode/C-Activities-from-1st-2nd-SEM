#include <stdio.h>

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements:\n");

    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++){
        if (array[i] < array[i+1]){
            array[i] = array[i+1];
        }

        else {
            array[i] = -1;
        }

        if (i == size - 1){
            array[i] = -1;
        }
    }

    printf("Result: ");
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}