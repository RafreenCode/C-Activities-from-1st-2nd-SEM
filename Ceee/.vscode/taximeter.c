#include <stdio.h>
#include <stdlib.h>

int main (){
    char a, b;
    int a2 = 50;
    int *ptr = &a2;
    *ptr = 69;

    printf("%d", *ptr);
}
    
    /*printf("Enter a character I: ");
    scanf(" %c", &a);
    printf("Enter a character II: ");
    scanf(" %c", &b);
    
    char *ptr = (char*) calloc(3, sizeof(int));
    
    if (ptr == NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    
    ptr[0] = a;
    ptr[1] = b;
    ptr[2] = '\0';
    
    printf("%c %c", ptr[0], ptr[1]);
}*/