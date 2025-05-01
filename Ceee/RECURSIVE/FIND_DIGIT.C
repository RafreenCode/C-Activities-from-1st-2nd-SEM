// #include <stdio.h>

// int digitFinder(int digit, int target){
//     if (digit == 0 && target == 0){
//         return 1;
//     }

//     if (digit == 0){
//         return 0;
//     }

//     if (digit % 10 == target){
//         return 1;
//     }

//     return digitFinder(digit / 10, target);
// }

// int main (){
//     int digit, target;
//     printf("Enter your digit: ");
//     scanf("%d", &digit);
//     printf("What is your target? ");
//     scanf("%d", &target);

//     int digitFound = digitFinder(digit, target);
//     if (digitFound){
//         printf("Digit is there!");
//     }

//     else {
//         printf("No digit is found :((");
//     }
// }