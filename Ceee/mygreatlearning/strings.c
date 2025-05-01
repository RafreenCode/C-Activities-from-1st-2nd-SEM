#include <stdio.h>
#include <string.h>

int main (){
    //char name[] = "Ralph";
    //int ralph = strlen (name);
    //char up = strupr(name);

    char name1[100];
    char name2[100];
    
    printf("Enter the first name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter your second name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    strcat(name1, " ");
    strcat(name1, name2);


    printf("Your full name is: %s\n", name1);
    printf("The length of your name is %d\n", strlen(name1));
    printf("The uppercase version is %s\n", strupr(name1));
    printf("The lower version is %s\n", strlwr(name1));
}