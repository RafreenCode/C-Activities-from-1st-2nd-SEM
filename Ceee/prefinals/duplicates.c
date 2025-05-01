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

    int hash[999];

    for (int i = 0; i < size; i++){
        hash[array[i]]++;
    }

    printf("The duplicate elements in the array is/are: ");

    for (int i = 0; i < size; i++){
        if (hash[array[i]] > 1){
            printf("%d ", array[i]);

            hash[array[i]] = 0;
        }
    }
}