#include <stdio.h>

void main (){

    int i, sum = 0, n;

    printf("Please input the nth term of natural numbers: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++){
    if (i < n){
        printf("%d+", i); 
        
    } 
    
    else {
        printf("%d", i);
    }
    sum += i;
}
    

    printf("\nThe Sum of the first %d natural numbers is: %d", n, sum);

}




