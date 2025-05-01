#include <stdio.h>
#include <stdlib.h>

int* sizePrinter(int a){
    int* array = (int*)malloc(a * sizeof(int));
    int j = 1;

    if (array == NULL){
        printf("The memory did not properly allocate");
        return 0;
    }

    for (int i = 0; i < a; i++){
        array[i] =  i + 1;
        j++;
    }

    return array;
}

int main (){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int* array = sizePrinter(a);

    if(!sizePrinter){
        printf("The system failed to allocate the memory");
        return 0;
    }

    for (int i = 0; i < a; i++){
        printf("%d ", array[i]);
        
    }

    free(array);
    
}