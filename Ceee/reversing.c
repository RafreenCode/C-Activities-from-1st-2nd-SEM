#include <stdio.h>

int main (void){

    int number = 0, reverse = 0, remainder = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    //94
    //number = 9, 0
    //remainder = 4, 9
    //reverse = 0 + 4 = 40 + 9 = 49

    while (number != 0){
        remainder = number % 10;
        reverse = reverse * 10;
        reverse = reverse + remainder;
        number = number / 10;
    }

    printf("Reversed number: %02d", reverse);



    return 0;
}