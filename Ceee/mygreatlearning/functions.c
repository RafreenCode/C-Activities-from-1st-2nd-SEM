#include <stdio.h>

int multiply (int a, int b);
int add(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);
float square(int a);
int power(int a, int b);


int main (){
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    multiply(a, b);
    //printf("The product is %d", multiply(a, b));


}

int multiply (int a, int b){
    printf("The product is %d", a * b);
}