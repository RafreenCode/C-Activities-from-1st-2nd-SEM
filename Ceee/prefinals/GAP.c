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

    int max = array[0], min = array[1];

    int hash[999] = {};

    for (int i = 0; i < size; i++){
        *(hash + *(array + i)) = 1;

        if (*(array + i) > max){
            max = array[i];
        }

        if (*(array + i) < min){
            min = array[i];
        }
    }

    printf("The gapped elements within the min and max are:\n");

    for (int i = min; i <= max; i++){
        if (*(hash + i) == 0){
            printf("%d ", i);
        }
    }
}