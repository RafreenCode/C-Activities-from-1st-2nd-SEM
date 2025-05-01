#include <stdio.h>

int minValue(int a, int b, int c){
    int minVal = a;

    if (b < minVal){
        minVal = b;
    }

    else if (c < minVal){
        minVal = c;
    }

    return minVal;
}

int main (){
    int minVal, a, b, c;

    printf("Enter value 1: ");
    scanf("%d", &a);
    printf("Enter value 2: ");
    scanf("%d", &b);
    printf("Enter value 3: ");
    scanf("%d", &c);

    minVal = minValue(a, b, c);

    printf("The minimum value is: %d", minVal);

}