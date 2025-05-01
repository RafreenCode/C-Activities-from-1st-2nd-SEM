#include <stdio.h>

int main (){
    int number, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    
    do{
        if (number % i == 0){
            printf("%d ", i);
        }

        i++;
    } while (i <= number);
}