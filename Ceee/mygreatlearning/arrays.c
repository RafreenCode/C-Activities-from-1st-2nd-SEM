#include <stdio.h>

int main (){

    int a[8] = {2,3,4,5,6,7,8,9};
    char b[5][100] = {"Hello", "Hi", "What's your name?", "I don't know", "okay"};

    for (int i = 0; i < 8; i++){
        printf("%d", a[i]);
    }

    printf("\n");

    for (int j = 0; j < 5; j++){
    printf("%s\n", b[j]);
    }
}