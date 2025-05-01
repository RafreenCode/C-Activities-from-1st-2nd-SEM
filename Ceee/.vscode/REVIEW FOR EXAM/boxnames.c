// #include <stdio.h>
// #include <string.h>
// #include <math.h>


//     // First - check if the string is larger than box
//     // Second - if it is larger, end the program, if not, continue
//     // Third - 
//     // 
//     // 

// int main (){
//     int size;
//     char name[50];
//     int checker = 1; 

//     printf("Enter the name you want to put in the box: ");
//     fgets(name, 50, stdin);
//     name[strcspn(name, "\n")] = '\0';
//     printf("%s\n\n", name);

//     int length = strlen(name);

//     printf("Enter the size of the box: ");
//     scanf("%d", &size);
    
//     if(length > size){
//     while (checker == 1){
//             printf("Choose a larger box.\n");
//             printf("Enter a new size: ");
//             scanf("%d", &size);

//             if (size > length){
//                 checker = 0;
//             }
//         }
//     }

//     printf("Box:\n");

//     int width = round(size/2);

//     for (int i = 0; i < width; i++){
//         if (i == 0 || i == width - 1) {
//             for (int j = 0; j < size; j++) {
//                 printf("*");
//             }
            
//             if (i == (width/2)){
//                 for (int o = 0; o < length; o++){
//                     if (o == 0 || o == size){
//                         printf("*");
//                     }

//                     else if (o == (length % 2 == 0)){
//                         printf(" ");
//                     }

//                     else
//                     printf("%c", name[o]);
//                 }
//             }

//             if (i == (width/2)){
//                 continue;
//             }

//             if (i == 0 || i == width){
//                 for (int j = 0; j < size - 1; j++){
//                     printf("*");
//                 }
//             }

//             else {
//                 for (int z = 0; z < size - 1; z++){
//                     if (z == 0 || z == size - 2)
//                     printf("*");

//                     else 
//                     printf(" ");
//                 }
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int size;
    char name[50];
    int checker = 1;

    printf("Enter the name you want to put in the box: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline
    int length = strlen(name);

    printf("Enter the size of the box: ");
    scanf("%d", &size);

    // Ensure the box is large enough
    while (size < length + 2) { // At least 2 extra spaces for border
        printf("The box size is too small for the name.\n");
        printf("Enter a larger box size: ");
        scanf("%d", &size);
    }

    // Calculate the height of the box (size / 2, rounded)
    int height = round(size / 2.0);

    // Print the box
    printf("\nBox:\n");

    for (int i = 0; i < height; i++) {
        if (i == 0 || i == height - 1) {
            // Top or bottom row
            for (int j = 0; j < size; j++) {
                printf("*");
            }
        } 
        
        else if (i == height / 2) {
            printf("*");
            int padding = (size - 2 - length) / 2; // Left padding //That's why nangutana kog length + 2 for comparison
            for (int j = 0; j < padding; j++) printf(" ");
            printf("%s", name);
            for (int j = 0; j < padding + (size - 2 - length) % 2; j++) printf(" "); // Right padding
            printf("*");
        } 
        
        else {
            printf("*");
            for (int j = 0; j < size - 2; j++) printf(" ");
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}

