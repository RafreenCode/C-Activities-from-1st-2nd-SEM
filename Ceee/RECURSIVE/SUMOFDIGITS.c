#include <stdio.h>

int sumOfDigits(int a){
    if (a == 0){
        return 0; // Proper base case
    }
    else {
        return (a % 10) + sumOfDigits(a / 10);
    }
}



int main (){
        printf("%d ", sumOfDigits(431));
}