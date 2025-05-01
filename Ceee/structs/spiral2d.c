#include <stdio.h>

#define MAX 100

void fillSpiralMatrix(int rows, int cols) {
    int matrix[MAX][MAX];
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        // Left to Right
        for (int i = left; i <= right; i++)
            matrix[top][i] = value++;

        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = value++;

        right--;

        // Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                matrix[bottom][i] = value++;
                
            bottom--;
        }

        // Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = value++;
            left++;
        }
    }

    // Print the matrix
    printf("Spiral Matrix of size %d x %d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    if (m > 0 && n > 0 && m <= MAX && n <= MAX)
        fillSpiralMatrix(m, n);
    else
        printf("Invalid size. Rows and columns must be between 1 and %d.\n", MAX);

    return 0;
}
