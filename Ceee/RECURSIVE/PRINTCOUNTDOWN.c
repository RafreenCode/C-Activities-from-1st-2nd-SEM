/*
    Print Countdown

    Create a recursive function that takes an integer n and;
    prints the numbers down from n to 0 using recursion

    In the main, ask for an integer n and use the created function

    Enter a number: 10
    10 9 8 7 6 5 4 3 2 1 0
*/

#include <stdio.h>

void Countdown(int n){
    if (n == 0){
        return;
    }

    printf("%d ", n);
    Countdown(n - 1);
    
}

int main (){
    int n;
    printf("Enter the value of nth term: ");
    scanf("%d", &n);

    Countdown(n);
}