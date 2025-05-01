/*
    Fibonacci Sum

    Create recursive function that takes an integer a, then calculates the sum of the first n fibonacci numbers;

    Assume that the first two numbers are 1 and 1.

    In the main, ask for an integer n and use the created function. Print the returned value of the function.

    Enter the value of n: 10
    sum of the first 10 Fibonacci numbers is 143
*/



#include <stdio.h>

int FibonacciSequence(int a){
    if (a == 0){
        return 0;
    }

    else if (a == 1){
        return 1;
    }

    return FibonacciSequence(a - 1) + FibonacciSequence(a - 2);
}

int GetSumFibonacci(int a){
    if (a == 1){
        return 1;
    }

    return FibonacciSequence(a) + GetSumFibonacci(a - 1);
}

int main (){
    int a;
    printf("Enter the nth term of the Fibonacci sequence: ");
    scanf("%d", &a);

    printf("The sum of the %d Fibonacci numbers is: %d", a, GetSumFibonacci(a));
}