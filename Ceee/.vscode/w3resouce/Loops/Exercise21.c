#include <stdio.h>

int main (){
    int num, sum = 9;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("%d ", sum);
        sum = (sum * 10) + 9;
    }
}