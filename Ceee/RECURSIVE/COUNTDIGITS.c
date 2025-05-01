#include <stdio.h>

// Recursive function to count the digits of a number
int countDigits(int num) {
    // Base case: if num is 0, return 1
    if (num == 0) {
        return 1;
    }
    // Base case: single-digit number
    if (num / 10 == 0) {
        return 1;
    }
    // Recursive step: count the digits of the remaining part
    return 1 + countDigits(num /= 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number of digits is: %d\n", countDigits(number));

    return 0;
}
