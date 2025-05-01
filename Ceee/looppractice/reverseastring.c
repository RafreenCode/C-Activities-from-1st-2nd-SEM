#include <stdio.h>
#include <string.h>

int main (){
    char name[] = "My Name is Ralph"; //word to be reversed
    int len = strlen(name);
    char reversed[len + 1];
    int i, j;


    for (i = 0, j = len - 1; i < len; i++, j--){
         reversed[i] = name[j];
    }

    reversed[len] = '\0';
    printf("Reversed string: %s", reversed);
}