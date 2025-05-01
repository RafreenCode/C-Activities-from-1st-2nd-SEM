#include <stdio.h>

int main (){
    int array[] = {1,2,3,4,5};
    int rotations;

    printf("How many rotations do you want? ");
    scanf("%d", &rotations);

    for (int i = 0; i < rotations; i++){
        int first = array[0];

        for (int j = 0; j < 5; j++){
            array[j] = array[j+1];
        }

        array[4] = first;
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
}