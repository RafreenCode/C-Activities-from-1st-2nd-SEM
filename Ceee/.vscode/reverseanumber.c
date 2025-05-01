#include <stdio.h>

void checker(int num){
    int reverse = 0;
    int temp;
    int rem;
    
    temp = num;

    while (num){
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (temp == reverse){
        printf("%d is a palindrome.", temp);
        }
            else {
                printf("%d is the reversed number!", reverse);
            }

}

int main (){
    int num = 969;
    

    checker(num);
}