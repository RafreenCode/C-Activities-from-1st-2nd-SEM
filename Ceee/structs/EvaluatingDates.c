#include <string.h>
#include <stdio.h>

typedef struct {
    int month, day, year;
} Date;

int compareDates(Date *d){
    if (d[0].day == d[1].day && d[0].month == d[1].month && d[0].year == d[1].year){
        return 0;
    }

    if (d[0].year < d[1].year){
        return -1;
    }

    if (d[0].year == d[1].year && d[0].month < d[1].month){
        return -1;
    }

    if (d[0].year == d[1].year && d[0].month == d[1].month && d[0].day < d[1].day){
        return -1;
    }

    else {
        return 1;
    }
}

int main (){
    Date d[2];

    printf("Enter the first date (MM DD YYYY): ");
    scanf("%d %d %d", &d[0].month, &d[0].day, &d[0].year);

    printf("Enter the second date (MM DD YYYY): ");
    scanf("%d %d %d", &d[1].month, &d[1].day, &d[1].year);

    if (compareDates(d) < 0){
        printf("The first date is before the second date.");
    }

    else if (compareDates(d) > 0){
        printf("The first date is after the second date.");
    }

    else {
        printf("Both dates are the same.");
    }
}
