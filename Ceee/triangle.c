#include <stdio.h>

int main(){
    int side = 6; 
    int base = 3;
    int height = 15;

    float perimeter = (side * 2) + base; //Isosceles Triangle
    double area = (double) (height * base) / 2;

    printf("%.1f\n", perimeter);
    printf ("%.3lf", area);

    return 0;

}