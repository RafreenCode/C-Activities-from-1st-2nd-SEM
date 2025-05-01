#include <stdio.h>

int counter(int digit){
    if (digit == 0){
        return 0;
    }

    int count = 0;
    count = 1;

    return count + counter(digit / 10);
}

int main (){
    int digit;
    printf("Enter your digit: ");
    scanf("%d", &digit);

    int count = counter(digit);

    printf("There are %d digits", count);
}