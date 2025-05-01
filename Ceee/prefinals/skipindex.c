#include <stdio.h>

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the values of the array: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int skip;

    printf("How many index do you want to skip: ");
    scanf("%d", &skip);

    for (int i = 0; i < size; i += skip + 1){
        printf("%d ", array[i]);
    }
}