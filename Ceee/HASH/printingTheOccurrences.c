#include <stdio.h>

void printingTheOccurrences(int* array, int size){
    int hash[999] = {0};
    int printed[999] = {0}; 

    for (int i = 0; i < size; i++){
        hash[array[i]]++;
    }

    printf("\nNumber\tNumber of Occurrences\tFrequency\n");

    for (int i = 0; i < size; i++){
        if (!printed[array[i]]) { // Print only if this number hasn't been printed yet 
            printf("%d\t%d\t\t%.2f%%\n", array[i], hash[array[i]], ((float)hash[array[i]] / size) * 100);
            printed[array[i]] = 1; // Mark number as printed
        }
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

    printingTheOccurrences(array, size);
}