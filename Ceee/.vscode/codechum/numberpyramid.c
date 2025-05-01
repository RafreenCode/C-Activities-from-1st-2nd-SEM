#include <stdio.h>

int main (){
    int rows, result = 0;

    printf("Enter how many rows you want: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++){
        result = 0;
        result = result + i;
        for (int spaces = rows - i; spaces > 0; spaces--){
            printf(" ");
        }

        for (int number1 = 1; number1 <= result; number1++){
            printf("%d", number1);
        }

        for (int number2 = result - 1; number2 >= 1; number2--){
            printf("%d", number2);
        }

        printf("\n");
    }
}