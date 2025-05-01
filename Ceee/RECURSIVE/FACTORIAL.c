#include <stdio.h>

int factorial (int n){
    if (n == 0){
        return 1;
    }

    else {
        return n * factorial(n - 1);
    }
}

int main (){
    int n;
    printf("Enter the amount of factorial you want: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("%d is the result.", result);
}