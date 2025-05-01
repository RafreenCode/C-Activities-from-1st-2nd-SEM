#include <stdio.h>

int collatz(int n) {
    if (n <= 0) return -1; // Handle invalid input
    int count = 0;

    while (n > 1) {
        count++;  // Count the current step

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }

    return count;
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int steps = collatz(a);

    if (steps == -1) {
        printf("Invalid input! Please enter a positive integer.\n");
    } else {
        printf("The count of operations is: %d\n", steps);
    }

    return 0;
}
