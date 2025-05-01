#include <stdio.h>

int fibonacci(int a){
    if (a <= 1){
        return 1;
    }

    else {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}

int main (){
    for (int i = 0; i < 5; i++){
        printf("%d ", fibonacci(i));
    }

    return 0;
}