#include <stdio.h>

int main (){
    int size, result;

    printf("Enter a number: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++){
        result = (size * 2) - 2 * i;
        for (int stars1 = 0; stars1 < i; stars1++){
            printf("*");
        }

        for (int spaces = 0; spaces < result; spaces++){
            printf(" ");
        }

        for (int stars2 = 0; stars2 < i; stars2++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < size; i++){
        result = size - i;
        for (int stars1 = 0; stars1 < result; stars1++){
            printf("*");
        }

        for (int spaces = 0; spaces < i * 2; spaces++){
            printf(" ");
        }

        for (int stars2 = 0; stars2 < result; stars2++){
            printf("*");
        }
        printf("\n");
    }
}




