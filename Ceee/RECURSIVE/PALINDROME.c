/* 
    Recursive function that takes a string and two integers, start and end
    start and end represent the  current character in the string being compared.

    Enter a string: racecar
    racecar is a palindrome 
*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char input[], int start, int end){
    if (input[start] != input[end]){
        return 0;
    }

    else if (start >= end){
        return 1;
    }

    return isPalindrome(input, start+1, end-1);
}

int main (){
    char input[50];
    printf("Enter an input: ");
    scanf("%[^\n]", input);

    if (isPalindrome(input, 0, strlen(input) - 1)){
        printf("%s is a palindrome", input);
    }
    
    else {
        printf("%s is not a palindrome", input);
    }
}