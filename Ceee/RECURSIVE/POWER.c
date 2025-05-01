#include <stdio.h>

int power (int a, int b){
    if (b == 0){
        return 1;
    }

    else{
        return a * power(a, b - 1);
    }
}

int main (){
    printf("5 raised to the power of 3 = %d", power(5, 3));
}