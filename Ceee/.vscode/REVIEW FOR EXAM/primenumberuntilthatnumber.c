#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num){
    if (num <= 1)
        return false;
    
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}

void printer(int num){
    printf("The prime number/s up until %d is/are: ", num);
    for (int i = 2; i <= num; i++){
        if (isPrime(i)){
            printf("%d ", i);
        }
    }
}

int main (){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printer(num);
}