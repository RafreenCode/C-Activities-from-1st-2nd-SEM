#include <stdio.h>

int main (){
    int number, flag = 0;

    printf("Enter the nth number for the prime numbers: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++){
        flag = 0;
        for (int j = 2; j <= i/2; j++){
            if (i % j == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            printf("%d ", i);
        }
    }
}