/*#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    
    printf("Enter string: ");
    scanf("%s", str);
    
    for(int i = 0; i = '\0'; i++){
        printf("%c", toupper(str[i]));
    }
    
}*/

#include <stdio.h>

void scanb(char *label, void *add, char *spec){
    printf("%s", label);
    scanf(spec, add);
}

int main (){
    int arry[50], n;
    float sum = 0, avg;
    
    scanb("Enter the size of array: ", &n, "%d");
    
    printf("Enter %d elements of array", n);
    
    for (int i = 0; arry[i] - 1; i++){
        scanf("%d", &arry[i]);
        sum += arry[i];
    }
    
    avg = sum / 3;
    
    printf("The average of the array is: %.2f", avg);
}

