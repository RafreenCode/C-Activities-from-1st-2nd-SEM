#include <stdio.h>
#include <math.h>

int isArmstrong(int number){
    int counter = 0, remainder = 0, sum = 0, temp = number;

    do {
        number /= 10;
        counter++;
    } while (number != 0);

    number = temp;

    do {
        remainder = number % 10;
        sum += (int) pow(remainder, counter);
        number /= 10;
    } while (number != 0);

    number = temp;

    if (sum == number){
        return 1;
    }

    else {
        return 0;
    }
}

int main (){
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    int checker = isArmstrong(number);

    if (checker){
        printf("%d is an Armstrong number", number);
    }

    else {
        printf("%d is not an Armstrong number", number);
    }
}