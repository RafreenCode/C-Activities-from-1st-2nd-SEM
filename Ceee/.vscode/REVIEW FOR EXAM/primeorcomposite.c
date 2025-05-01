#include <stdio.h>

int main (){
    int num, isPrime = 1;
    int primes[50], composite[50], primecount = 0, compositecount = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        isPrime = 1;
        
        if (i == 1){
            continue;
        }

        for (int j = 2; j <= i/2; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }
    
        if (isPrime){
            primes[primecount++] = i;
        }

        else {
            composite[compositecount++] = i;
        }
    }

    printf("The composite numbers are: ");
    for(int i = 0; i < compositecount; i++){
        printf("%d ", composite[i]);
    }

    printf("\nThe prime numbers are: ");
    for(int i = 0; i < primecount; i++){
        printf("%d ", primes[i]);
    }
}