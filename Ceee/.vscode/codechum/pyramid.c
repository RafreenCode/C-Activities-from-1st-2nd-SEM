#include <stdio.h>

int main (){
    int rows, result;

    printf("Enter number of rows: ");
    scanf("%d", &rows);//5

    //How many times will it repeat UPPER
    for (int i = 1; i <= rows; i++){
        result = 2 * i - 1;//1 --> 3 --> 5

        for (int spaces = rows - i; spaces > 0; spaces--){
            printf(" ");
        }

        for (int stars = 0; stars < result; stars++){
            printf("*");
        }

        printf("\n");

    }

    //BOTTOM PART
    for (int i = 1; i < rows; i++){
        result = (2 * (rows - i) - 1);

        for (int spaces = i; spaces > 0; spaces--){
            printf(" ");
        }

        for (int stars = 0; stars < result; stars++){
            printf("*");
        }

        printf("\n");

    }
} //1234
