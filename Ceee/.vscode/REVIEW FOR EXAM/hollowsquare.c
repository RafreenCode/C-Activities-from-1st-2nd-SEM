#include <stdio.h>

int main (){
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++){
        if (i == 0 || i == size - 1){
            for (int j = 0; j < size; j++){
                printf("* ");
            }
        }

        else {
            printf("* ");
            for (int spaces = 0; spaces < size - 2; spaces++)
            printf("  ");
            printf("*");
        }

        printf("\n");
    }
}