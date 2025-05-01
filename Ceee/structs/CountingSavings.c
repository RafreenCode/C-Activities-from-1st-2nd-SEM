#include <stdio.h>
#include <string.h>

typedef struct {
    int bills;
    int coins;
} SavingsBank;

int getTotal(SavingsBank savings){
    return (savings.bills * 100) + (savings.coins);
}

int main (){
    SavingsBank s;
    printf("Enter the number of bills you have: ");
    scanf("%d", &s.bills);

    printf("Enter the number of coins you have: ");
    scanf("%d", &s.coins);

    int total = getTotal(s);
    printf("The total amount of money you have is: %d", total);
}