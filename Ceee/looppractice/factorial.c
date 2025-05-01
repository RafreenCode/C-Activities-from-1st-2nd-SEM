#include <stdio.h>

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }

    return result;
}

int main (){
    int num = 3;
    int result = factorial(num);
    printf("The factorial of %d is %d", num, result);
}