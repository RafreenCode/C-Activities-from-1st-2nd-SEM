#include <stdio.h>
#include <string.h>

// Define Course struct
typedef struct {
    char code[10];
    char title[100];
} Course;

// Define Student struct with a pointer to a Course
typedef struct {
    int id;
    char name[50];
    Course *coursePtr;
} Student;

// Function to print student and course info
void printStudent(Student *s) {
    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    if (s->coursePtr != NULL) {
        printf("Enrolled Course: %s - %s\n", s->coursePtr->code, s->coursePtr->title);
    } else {
        printf("No course assigned.\n");
    }
}

int main() {
    // Create a course
    Course c = {"CS101", "Intro to Programming"};

    sprintf(c.title, "%d", 1);

    // Create a student and point to the course
    Student s;
    s.id = 1;
    strcpy(s.name, "Diana");
    s.coursePtr = &c; // Pointing to the existing course

    // Print student info
    printStudent(&s);

    return 0;
}
