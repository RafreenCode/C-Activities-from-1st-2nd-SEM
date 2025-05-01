#include <stdio.h>
#include <string.h>

struct student { 
   int id; 
   char name[20]; 
};



union student2{ //collective memory for all variables
    char name[10];
    int roll;
    float cgpa;
};

int main (){
    struct student s1 = {1, "John"};
    struct student s2 = s1;
    strcpy(s2.name, "Alice");
    printf("%s", s1.name);
    
    /*printf("Enter your name, roll number, and GPA\n");
    scanf("%s%d%f", s1.name, &s1.roll, &s1.cgpa);

    printf("Information of student is\n");
    printf("Name: %s, Roll Number: %d, and GPA: %.2f\n", s1.name, s1.roll, s1.cgpa);*/

}

/*int main (){
    int a = 25;
    int *p = &a;
    *p = 69;
    
    printf("\nAddress of a is %x", &a);
    printf("\nAddress of a using pointer variable is %x", p);
    printf("\nValue of a using *p is %d", a);
}*/

/*int main (){
    int n, result;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    
    for (int i = 1; i <= n; i++){   //until i = 10 if n = 10
        result = (2 * i) - 1;   //2 * 1 = 2 - 1 = 1;

        for (int spaces = n - i; spaces > 0; spaces--){ //10 - 1 = 9 and 9 > 0 so prints it 9 times
            printf(" ");
        }
        
        for (int rows = 0; rows < result; rows++){ //0 and 0 < 1 so prints it 1 time
            printf("*");
        }
        
        printf("\n");
    }

    for (int i = 1; i < n; i++){
        result = (2 *(n - i)) - 1;  //2 * (10 - 1) - 1 = 18 - 1 = 17;

        for (int spaces = i; spaces > 0; spaces--){ // 1 and 1 > 0 so prints it 1 time
            printf(" ");
        }
        
        for (int rows = 0; rows < result; rows++){ // 0 and 0 < 17, so it prints it 17 times
            printf("*");
        }
        
        printf("\n");
    }
}*/

/*int main (){
    int number, result, spaces, rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &number);
    
    for (int i = 0; i < number; i++){
        
        result = (2 * (number - i)) - 1;
        
        for (int spaces = i; spaces > 0; spaces--){
            printf(" ");
        }
        
        for (int rows = 0; rows < result; rows++){
            printf("*");
        }
        
        printf("\n");
    }
    
    for (int i = 2; i <= number; i++){
        
        result = (2 * i) - 1;
        
        for (int spaces = number - i; spaces > 0; spaces--){
            printf(" ");
        } //Spaces must be i less than rows then it keeps decrementing
        
        for (int rows = 0; rows < result; rows++){
            printf("*");
        }
        printf("\n");
    }

    
}*/

