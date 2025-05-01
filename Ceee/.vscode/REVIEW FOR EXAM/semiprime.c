#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    if (n <= 1){
        return false;
    }

    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

bool SemiPrimeChecker(int num){
    int otherFactor;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            int otherFactor = num / i;

            if (isPrime(i) && isPrime(otherFactor)){
                return true;
            }
        }
    }

    return false;
}

int main (){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (SemiPrimeChecker(num)){
        printf("This is a semiprime number!");
    }

    else   
        printf("This is not a semiprime number!");
}