#include <stdio.h>

int productexceptiself (int array[], int size){
    int product = 1;
    int productarray[size];

    printf("The products are: ");
    for (int i = 0; i < size; i++){
        product = 1;
        for (int j = 0; j < size; j++){
            if (j == i){
                continue;
            }
            else {
                product *= array[j];
            }
        }
        productarray[i] = product;
    }

    for (int i = 0; i < size; i++){
        printf("%d ", productarray[i]);
    }
}

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    productexceptiself(array, size);
}
