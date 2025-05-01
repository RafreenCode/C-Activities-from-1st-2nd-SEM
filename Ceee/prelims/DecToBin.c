#include <stdio.h>
#include <math.h>

//RECURSION LOOP
int decToBin(int n){
    if (n == 0){
        return 0;
    }

    return (n % 2) + 10 * decToBin(n / 2);

//(Get remainder of the number using the base you're converting to) then add to the quantity of the current base and the recursion divided by the base you're converting to;
/*
n = Number
b = Current base
c = Base to convert

(n % c) + b * recursion(n / c) --> GENERAL FORMULA

*/
}

int main (){
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);

    if (n == 0){
        printf("0");
        return 0; 
    }

    else {
        printf("%d", decToBin(n));
    }

    return 0;
}


//ITERATION LOOP
// int main (){
//     int rem = 0, n, i = 0;

//     printf("Enter the decimal number: ");
//     scanf("%d", &n);

//     int reversed[32];

//     while (n > 0){
//         rem = n % 2;
//         reversed[i] = rem;
//         i++;
//         n /= 2;
//     }

//     for (int j = i - 1; j >= 0; j--){
//         printf("%d", reversed[j]);
//     }
// }