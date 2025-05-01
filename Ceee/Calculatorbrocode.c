#include <stdio.h>
#include <math.h>

int main (){

    char operator;
    double num1, num2, result;

    printf("\nEnter an operator (+ - * ^ root or /):");
    scanf("\n%c", &operator);

    if (operator == 'r') {
        printf("Enter the number you want to find the square root of:");
        scanf("%lf", &num1);
        result = sqrt(num1);
        printf("\nThe square root of %lf is %.3lf", num1, result);
    }

    else {
    printf("Enter number 1:");
    scanf("%lf", &num1);

    printf("Enter number 2:");
    scanf("%lf", &num2);
    }


    switch (operator)
    {
        default:
            printf("%c is not a valid", operator);

    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nresult: %lf", result);
        break;

    case '*':
        result = num1 * num2;
        printf("\nresult: %lf", result);
        break;

    case '/':
        result = num1 / num2;
        printf("\nresult: %lf", result);
        break;

    case '^':
        result = pow(num1,num2);
        printf("\nresult: %lf", result);
        break;
    
    }



    return 0;
}