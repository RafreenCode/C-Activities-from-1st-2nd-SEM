#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main (){
    int size;

    printf("How many books do you want to input? ");
    scanf("%d", &size);
    while (getchar() != '\n');

    struct Book book[size];

    for (int i = 0; i < size; i++){
        printf("Please input the title, author, and date of book (%d):\n", i + 1);

        printf("Title: ");
        fgets(book[i].title, 50, stdin);
        book[i].title[strcspn(book[i].title, "\n")] = '\0';

        printf("Author: ");
        fgets(book[i].author, 50, stdin);
        book[i].author[strcspn(book[i].author, "\n")] = '\0';

        printf("Year: ");
        scanf("%d", &book[i].year);
        while (getchar() != '\n');
    }


    for (int i = 0; i < size; i++){
        printf("The title of the book (%d) is %s having %s as its author, published in %d\n", i+1, book[i].title, book[i].author, book[i].year);
    }
}