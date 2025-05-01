#include <stdio.h>
#include <string.h>

int main (){
    char str1[50];
    char str2[50];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str1);
    
    size_t strlength = strlen(str1) - 1;

    for (i = 0; i < strlength; i++){
        printf("%s", str1[i]);
        return 0;
    }
 
}