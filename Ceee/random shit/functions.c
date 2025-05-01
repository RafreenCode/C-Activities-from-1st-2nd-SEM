#include <stdio.h>
#define PI 3.1416

int circum(float rad);
float getNum();
void display(int result);

int main (){
    float rad;
    int result;
    display(circum(getNum()));
}

float getNum(){
    float rad;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    return rad;
}

int circum(float rad){
    int result;
    result = 2 * PI * rad;
    return result;
}

void display(int result){
    printf("The circumference of the circle is: %d", result);
}