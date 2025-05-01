#include <stdio.h>


//use switches becasue they're more efficient//


int main (){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Fantastic Job!\n");
            break;
        case 'C':
            printf("You did good!\n");
            break;
        case 'D':
            printf("Needs improvement!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("Please enter only valid grades!");

    }


    return 0;
}