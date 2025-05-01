#include <stdio.h>

int main(){
    /*variable = Allocated space in memory to store a value.
                We refer to a variable's name to access the stored value*/

    int x; //declaration
    x = 123; //initialization
    int y = 321; // declaration + initialization

    int age = 16; //integer
    float gpa = 4.8; //floating or decimal can store around 4 bytes or 6-7 digits while double can store 8 bytes or 15-16 digits
    char grade = 'A'; //single character
    char name[] = "Ralph Lawrence S. Santillan"; //an array of characters or like string a combination of single characters

    printf("\nYou are %d years old\n",age); //%d is for integers
    printf("Hello %s\n",name); //%s is for string
    printf("Your average grade is %c\n",grade); //%c is char
    printf("Your GPA is %f\n",gpa); //%f is for float


    return 0;
}