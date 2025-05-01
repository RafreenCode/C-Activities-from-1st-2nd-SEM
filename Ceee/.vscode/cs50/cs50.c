#include <stdio.h>

void agree();
void disagree();
void neither();

int main (){

    char c;

    printf("Do you agree? Y or N: ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y'){
        agree();
    }

    else if (c == 'N' || c == 'n'){
        disagree();
    }

    else {
        neither();
    }


}

void agree(){
    printf("Meow! Agree!");
}

void disagree(){
    printf("Meow! Disagree!");
}

void neither(){
    printf("Meow! Input the correct letter!");
}