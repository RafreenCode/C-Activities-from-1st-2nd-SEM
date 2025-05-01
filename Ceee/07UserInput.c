#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (){

    char age_str[1024];
    char name[1024];
    char mood[1024];

    printf("What's your name? ");
    if (fgets(name, 1024, stdin) == NULL) {
        printf("Error reading input. Please try again.\n");
        return 1;// handle error
    }
    name[strcspn(name, "\n")] = 0;

    sleep(1);
    printf("I see, your name is %s\n", name);

    sleep(1);
    printf("\nHow about your age? ");
    if (fgets(age_str, 1024, stdin) == NULL) {
        printf("Error reading input. Please try again.\n");
        return 1;// handle error
    }
    age_str[strcspn(age_str, "\n")] = 0;

    sleep(1);
    printf("\nOkay last, how are you doing? ");
    if (fgets(mood, 1024, stdin) == NULL) {
        printf("Error reading input. Please try again.\n");
        return 1;// handle error
    }
    mood[strcspn(mood, "\n")] = 0;

    sleep (1);
    printf("I see, so you are %s, your age is %s, and you are %s\n", name, age_str, mood);

    return 0;
}





/* int age;
    char name[25];
    char mood[25];

    printf("What's your name?");
    scanf("\n%s", &name);

    printf("\nHow are you %s?", name);
    scanf("\n%s", &mood);

    printf("\nIt's nice to see that you are %s", mood);*/

    //This is if you want your name to be able to read white spaces

    /*int age;
    char name[25];
    char mood[25];

    printf("What's your name?");
    fgets(name, 25, stdin);
    name[strcspn(name, "\n")] = 0;

    printf("How are you %s?", name);
    fgets(mood, 25, stdin);
    mood[strcspn(mood, "\n")] = 0;

    printf("It's nice to see that you are %s, %s", mood, name);*/
