#include <stdio.h>
#include <string.h>

void reverseAstring(char* string, int size){
    printf("Reversed String: ");

    for (int i = size - 1; i >= 0; i--){
        printf("%c", string[i]);
    }
}

int main (){
    char string[100];
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    
    string[strcspn(string, "\n")] = '\0';

    int size = strlen(string);

    reverseAstring(string, size);
}