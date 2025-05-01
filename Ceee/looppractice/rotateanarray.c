#include <stdio.h>

int main (){
    int size;
    printf("Enter an array size: ");
    scanf("%d", &size);

    int array[size][size];

    int rotations;

    printf("Enter how many rotations: ");
    scanf("%d", &rotations);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++){
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < size; j++){
            scanf("%d", &array[i][j]);
        }
    }

    printf("Original array:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int left = 0, right = size - 1, top = 0, bottom = size - 1, temp;

    printf("Rotated array:\n");
    
    for (int i = 0; i < rotations; i++){
            int i;
            int temp = array[0][0]; // Save top-left corner //temp = 1
        
            // Move top row right
            for (i = 0; i < size - 1; i++)
                array[0][i] = array[0][i + 1];
        
            // Move right column up
            for (i = 0; i < size - 1; i++)
                array[i][size - 1] = array[i + 1][size - 1];
        
            // Move bottom row right
            for (i = size - 1; i > 0; i--)
                array[size - 1][i] = array[size - 1][i - 1];
        
            // Move left column down
            for (i = size - 1; i > 1; i--)
                array[i][0] = array[i - 1][0];
        
            array[1][0] = temp; // Place saved element
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }


}