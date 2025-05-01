#include <stdio.h>

int main (){
    int size;

    printf("How big would you like the square to be? ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++){
        if (i == 1 || i == size){
            for (int stars = 1; stars <= size; stars++){
                printf("* ");
            }
        }

        else {

            if (i != 1 || i != size){
                    printf("*");

                for (int spaces = size * 2 - 2; spaces > 1; spaces--){
                    printf(" ");
                }
                    printf("*");
            }

        }

        printf("\n");

    }
}