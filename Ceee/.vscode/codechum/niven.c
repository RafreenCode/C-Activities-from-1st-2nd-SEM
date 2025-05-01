#include <stdio.h>

int isNiven(int number){
    int rem, temp, sum = 0;

    temp = number;

    do {
        rem = number % 10;
        sum += rem;
        number /= 10;
    } while (number != 0);

    if (temp % sum == 0){
        return 1;
    }

    else {
        return 0;
    }
}

int main (){
    int number, flag;

    printf("Enter the number: ");
    scanf("%d", &number);

    flag = isNiven(number);

    if (flag){
        printf("%d is a Niven number", number);
    }

    else {
        printf("%d is not a Niven number", number);
    }
}