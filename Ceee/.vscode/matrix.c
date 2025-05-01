#include <stdio.h>
#include <string.h>

int main (){
    int size, length, ctr = 0;
    char matrix[50][50];
    char final[50] = {0};

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    printf("Enter the letters of the matrix which you want to input in a %dx%d size:\n", size, size);

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf(" %c", &matrix[i][j]);
            if (i == j){
                final[i] = matrix[i][j];
                ctr++;
            }
        }
    }

    final[ctr] = '\0';

    printf("The diagonal result of the string is: %s", final);
}