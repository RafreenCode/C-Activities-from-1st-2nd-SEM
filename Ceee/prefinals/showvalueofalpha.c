#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    int num = 0;

    char s[] = "zbax";

    for (int i = 0; s[i] != '\0'; i++){
        int temp = (s[i] - 'a') + 1;
        int rev = 0;
        int digits = 0;

        if (temp == 0){
            rev = rev * 10;
        }

        while (temp != 0){
            rev = rev * 10 + (temp % 10);
            temp /= 10;
            digits++;
        }

        while (digits--){
            num = num * 10 + (rev % 10);
            rev /= 10;
        }

    }

    printf("The value of the string is %d", num);
}