#include <stdio.h>

/* 
    Sum of Numbers Divided By 10

    Create a recursive function that takes an integer n
    then sums all the values of numbers which are divided by 10
    from 1 to n

    In the main, ask for integer n and print the return value in two decimal places

    Enter the value of N: 100
    Sum: 505.00

    Enter the value of N: 34
    Sum: 59.50 
*/

float getsum(float n){
    if (n == 1.00){
        return 1;
    }

    return (float) n + getsum(n-1);
}

int main (){
    float n;
    printf("Enter the value of nth term: ");
    scanf("%f", &n);

    printf("The sum of all numbers from 1 to %f, which are then divided by 10 is: %.2f", n, (getsum(n) / 10.00));
}