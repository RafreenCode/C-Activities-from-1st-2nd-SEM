#include <stdio.h>
#include <unistd.h>

int main (){

    double unit, misc, tuition, enroll;
    const int bf = 200;

    printf("Enter the amount of units you want for this semester:");
    scanf("%lf", &unit);
    printf("\nThe total amount you have to pay based on your units is %lf", unit);
    enroll = unit * 45;
    misc = 0.15 * enroll;
    tuition = misc + enroll + bf;

sleep (1);

    printf("\nThe miscellaneous fee you have to pay is %lf", misc);

sleep (1);

    printf("\nThe total semester fee you have to pay is %lf", tuition);

    return 0;
}