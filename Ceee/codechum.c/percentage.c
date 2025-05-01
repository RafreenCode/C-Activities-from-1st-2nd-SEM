#include <stdio.h>
#define PI 3.14159265358939

/* percentage 
double percentageCalc(double x, double y);

int main(){

    double x, y, result;
    printf("Enter the value: ");
    scanf("%lf", &x);
    printf("Enter the total: ");
    scanf("%lf", &y);

    result = percentageCalc(x, y);

    printf("%.2lf%% of %.2lf is %.2lf", result, y, x);

}

double percentageCalc(double x, double y){
    return (x/y) * 100;
} */

/* linear Equation double calculateLinearEquation(double x, double slope, double y);

int main (){
    double x, slope, y, result;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter slope: ");
    scanf("%lf", &slope);
    printf("Enter y intercept: ");
    scanf("%lf", &y);

    result = calculateLinearEquation(x, slope, y);  

    printf("Result: %.2lf", result);

}

double calculateLinearEquation(double x, double slope, double y){
    return (slope * x) + y;
} */


/* Product Rating double calculateAverageRating(double a, double b, double c){
    return (a + b + c) / 3;
}

void analyzeProductRating(char *prodname, char *category, double qual, double price, double service){
    printf("Product Name: %s\n", prodname);
    printf("Category: %s\n", category);
    printf("Quality Rating: %.2lf\n", qual);
    printf("Price Rating %.2lf\n", price);
    printf("Service Rating: %.2lf\n", service);
    printf("Overall Rating: %.2lf\n", calculateAverageRating(qual, price, service));
}

int main (){

    char prodname[100], category[100];
    double qual, price, service;

    printf("Enter Product Name: ");
    scanf("%s", prodname);
    printf("Enter Category: ");
    scanf("%s", category);
    printf("Enter Quality Rating: ");
    scanf("%lf", &qual);
    printf("Enter Price Rating: ");
    scanf("%lf", &price);
    printf("Enter Service Rating: ");
    scanf("%lf", &service);

    analyzeProductRating(prodname, category, qual, price, service);

    return 0;
} */

double calculateSquareArea(){

}

double calculateCircleArea(){

}

int main (){
    double x, y;
    printf("Enter the side of the square: ");
    scanf("%lf", x);
    printf("Enter the radius of the circle: ");
    scanf("%lf", y);
    printf("Total area (sqaure + circle): %.2lf", y);

}