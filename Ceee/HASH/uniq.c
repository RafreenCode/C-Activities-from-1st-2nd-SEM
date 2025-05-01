#include <stdio.h>

int main (){
    int array[] = {1, 2, 2, 3, 4, 5, 5, 6};

    int size = sizeof(array)/sizeof(int);

    int uniqcnt = 0, flag = 0;
    int uniq[size];

    for (int i = 0; i < size; i++){
        int count = 0;
        flag = 1;

        for (int j = 0; j < size; j++){
            if (array[i] == array[j]){
                count++;

                if (count > 1){
                    flag = 0;
                    break;
                }
                
            }
        }

        if (flag){
            uniq[uniqcnt++] = array[i]; 
        }
    }

    for (int i = 0; i < uniqcnt; i++){
        printf("%d ", uniq[i]);
    }
    
}