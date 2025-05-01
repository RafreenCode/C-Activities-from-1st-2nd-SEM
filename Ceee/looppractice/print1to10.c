#include <stdio.h>

/*int main(){

    for (int i = 0; i <= 10; i++)
    {
        printf("%-3d", i);
    }
}*/

int main (){

    int n, sum = 0, i = 1;

    printf("Please input the number of naturals numbers you want to get the sum of: ");
    scanf("%d", &n);

    while (i <= n){
        sum += i;
        i++;
    }

    printf("The sum of the first %d natural numbers is %d", n, sum);

}