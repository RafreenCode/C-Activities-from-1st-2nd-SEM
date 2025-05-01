#include <stdio.h>

void addElement(int *array, int a, int target){
    array[a] = target;
}

int main (){
    int a, target;
    printf("Enter the amount of elements: ");
    scanf("%d", &a);

    printf("Enter the elements: ");
    int array[a + 1];

    for (int i = 0; i < a; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter the element you want to add: ");
    scanf("%d", &target);

    addElement(array, a, target);

    printf("The new array is: ");
    for (int i = 0; i <= a; i++){
        printf("%d ", array[i]);
    }
}