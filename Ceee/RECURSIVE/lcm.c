#include <stdio.h>

int GCD(int x, int y){
    if (y == 0){
        return x;
    }

    return GCD(y, x % y);
}

int LCM(int x, int y){
    return (x * y) / GCD(x, y);
}

int main (){
    int x, y;
    printf("Enter the x: ");
    scanf("%d", &x);
    printf("Enter the y: ");
    scanf("%d", &y);

    printf("The LCM of %d and %d is: %d",x, y, LCM(x, y));
}