// #include <stdio.h>

// int main (){
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int array[size][size];

//     printf("Enter the elements of the array:\n");

//     for (int i = 0; i < size; i++){
//         for (int j = 0; j < size; j++){
//             scanf("%d", &array[i][j]);
//         }
//     }

//     printf("The Original Array:\n");

//     for (int i = 0; i < size; i++){
//         for (int j = 0; j < size; j++){
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nRotated 90 Degrees Clockwise:\n");
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             printf("%d ", array[size - 1 - j][i]);
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>

void rotateMatrix90Clockwise(int matrix[][3], int n) {
    // Create a new matrix for the rotated result
    int rotated[3][3];
    
    // Rotate 90 degrees clockwise to get the desired output pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[i][j] = matrix[n-1-j][i];
        }
    }
    
    // Copy the rotated matrix back to the original
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rotated[i][j];
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    
    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    rotateMatrix90Clockwise(matrix, n);
    
    printf("\nMatrix after 90° clockwise rotation:\n");
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}