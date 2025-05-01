#include <stdio.h>

void matrixprinter(int row, int col, int array[row][col]){
    int matrix[8][8];

    printf("\nModified Matrix:\n");

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            matrix[i][j] = 1;
        }
    }

    for (int i = 0; i < row; i++){
        matrix[array[i][0]][array[i][1]] = 0;
    }

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}

int main (){
    int row;
    printf("Enter the number of locations: ");
    scanf("%d", &row);

    int array[row][2];

    printf("Enter the locations:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &array[i][j]);
        }
    }

    matrixprinter(row, 2, array);
}