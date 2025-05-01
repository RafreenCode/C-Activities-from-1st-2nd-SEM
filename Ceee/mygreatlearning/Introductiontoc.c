#include <stdio.h>
#include <conio.h>  // Include conio.h for getch()

/*int main() {
    char ch;

    printf("Press any key to continue...\n");
    ch = getch();  // Waits for a key press and stores it in 'ch'

    printf("You pressed: %c\n", ch);  // Print the character that was pressed

    return 0;
}  */

#include <stdio.h>
#include <stdbool.h>  // Include this to use 'bool' in C

int main() {
    // Example user data
    int userAccessLevel = 7;  // User access level (can be from 1 to 10)
    int isAdmin = 0;     // Boolean to track if the user is an admin

    // If access level is 7 or higher, consider the user an admin
    if (userAccessLevel >= 7) {
        isAdmin = 1;
    }

    // Check if the user is an admin and print appropriate message
    if (isAdmin) {
        printf("Access granted to admin section.\n");
    } else {
        printf("Access denied. Admin privileges required.\n");
    }

    return 0;
}