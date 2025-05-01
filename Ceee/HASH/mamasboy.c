#include <stdio.h>

int main (){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int size = sizeof(array)/sizeof(int);  
    int res[size], idx = 0;

    if (size % 2 == 0){
        for (int i = 0; i < size/2; i++){
            res[idx] = array[i];
            idx += 2;
        }
    }

    else {
        for (int i = 0; i <= size/2; i++){
            res[idx] = array[i];
            idx += 2;
        }
    }
    

    idx = 1;

    for (int i = size - 1; i >= size/2; i--){
        res[idx] = array[i];
        idx += 2;
    }

    for (int i = 0; i < size; i++){
        printf("%d ", res[i]);
    }
}