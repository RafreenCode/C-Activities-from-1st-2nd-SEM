#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//& | ^ ~ << >>

/* MASKING int main (){
    int num, mask;

    printf("Enter your number: ");
    scanf("%d", &num);

    mask = ~(num & 1); //7 and 1 = 1 
    //0111 and 0001 = 0001 = 1
    num = mask & num;


    printf("The result is: %d", num);
 }*/

/* REVERSE int main (){

    int num1, num2;
    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2; //11 and 01 = 10
    num2 = num1 ^ num2; //10 and 01 = 11
    num1 = num1 ^ num2; //10 and 11 = 01

    printf("Number 1 is %d\nNumber 2 is %d", num1, num2);
}*/

/* LEFT SHIFT int main (){
    int num1;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Input: %d\n", num1);

    num1 = num1 << 2;

    printf("Output: %d", num1);
}*/
