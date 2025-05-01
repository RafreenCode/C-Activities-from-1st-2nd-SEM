#include <stdio.h>

int main (){
    long long int number, highest, remainder;

    printf("Enter a number:");
    scanf("%lld", &number);

    highest = 0;

    while (number > 0){
        remainder = number % 10; //1234 --> 4
        if (remainder > highest){
            highest = remainder;
            if (highest == 9){
                break;
            }
        }
        number /= 10; //1234 --> 123
    }

    printf("%d", highest);
}