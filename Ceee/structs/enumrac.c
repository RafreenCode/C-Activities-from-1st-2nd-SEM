#include <stdio.h>

typedef enum {
    Vegetarian = 1,
    Vegan,
    GlutenFree,
    Keto,
    Pescatarian
} DietaryPreference;

char* getDietaryDescription(DietaryPreference preference) {
    switch (preference) {
        case Vegetarian:
            return "Excludes meat and fish.";
        case Vegan:
            return "Excludes all animal products.";
        case GlutenFree:
            return "Excludes gluten-containing grains.";
        case Keto:
            return "Low-carb, high-fat diet.";
        case Pescatarian:
            return "Includes fish but excludes other meats.";
        default:
            return "Invalid dietary preference.";
    }
}

int main() {
    int preferenceInput;
    
    printf("Enter the number for the dietary preference (1 for Vegetarian, 2 for Vegan, 3 for GlutenFree, 4 for Keto, 5 for Pescatarian): ");
    scanf("%d", &preferenceInput);
    
    DietaryPreference preference = (DietaryPreference)preferenceInput;
    char* description = getDietaryDescription(preference);
    
    if (preferenceInput < 1 || preferenceInput > 5) {
        printf("Invalid dietary preference.\n");
    } else {
               if (preferenceInput == 1) {
                    printf("Vegetarian: %s\n", description);
                } else if (preferenceInput == 2) {
                    printf("Vegan: %s\n", description);
                } else if (preferenceInput == 3) {
                    printf("GlutenFree: %s\n", description);
                } else if (preferenceInput == 4) {
                    printf("Keto: %s\n", description);
                } else if (preferenceInput == 5) {
                    printf("Pescatarian: %s\n", description);
                } else {
                    printf("Invalid dietary preference.\n");
                }
    }

    return 0;
}