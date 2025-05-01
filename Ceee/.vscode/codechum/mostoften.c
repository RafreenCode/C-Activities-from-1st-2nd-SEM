#include <stdio.h>

int main (){
    int array[] = {1,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int size = sizeof(array) / sizeof(int);
    int counter = 0, mostoften = 0, maxcount = 0;;

    for (int i = 0; i < size; i++){
        counter = 0;
        for (int j = 0; j < size; j++){
            if (array[i] == array[j]){
                counter++;
            }
        }

        if (counter > maxcount){
                maxcount = counter;
                mostoften = array[i];
            }
    }

    printf("The most occured is %d", mostoften);
}