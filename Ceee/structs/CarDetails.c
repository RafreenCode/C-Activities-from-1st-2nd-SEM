#include <string.h>
#include <stdio.h>

typedef struct {
    char brand[20];
    char model[20];
    int year;
    float mileage;
} Car;

float calculateDepreciation(float mileage){
    if (mileage < 10000){
        return 0;
    }

    else if (mileage >= 10000 && mileage <= 49999){
        return 10;
    }

    else if (mileage >= 50000 && mileage <= 99999){
        return 20;
    }

    else {
        return 30;
    }
}

void displayCarDetails(Car car){
    printf("\nCar Details:\n");
    printf("Brand: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Mileage: %d\n", (int)car.mileage);
    printf("Depreciation: %d%%", (int)calculateDepreciation(car.mileage));
}

int main (){
    Car car;

    printf("Enter the brand of the car: ");
    fgets(car.brand, 100, stdin);
    car.brand[strcspn(car.brand, "\n")] = '\0';

    printf("Enter the model of the car: ");
    fgets(car.model, 100, stdin);
    car.model[strcspn(car.model, "\n")] = '\0';

    printf("Enter the year of the car: ");
    scanf("%d", &car.year);

    printf("Enter the mileage of the car: ");
    scanf("%f", &car.mileage);

    displayCarDetails(car);
}