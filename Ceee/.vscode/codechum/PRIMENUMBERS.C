#include <stdio.h>

int main (){
    int n, flag = 0;
    printf("Enter the nth number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++){
        flag = 0;
        for (int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if (!flag){
            printf("%d ", i);
        }
    }
}