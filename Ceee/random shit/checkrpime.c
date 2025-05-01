#include <stdio.h>
#include <math.h>  // for sqrt() function

int main(int argc, char *argv[]) {
    int n, i, isPrime = 1;

    // Ask user to input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle case for numbers less than 2
    if (n < 2) {
        isPrime = 0;  // Numbers less than 2 are not prime
    } else {
        // Check divisibility from 2 up to sqrt(n)
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;  // Number is divisible by i, so not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}