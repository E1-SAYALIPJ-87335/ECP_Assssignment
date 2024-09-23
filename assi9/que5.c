#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    float marks;
} Student;

void writeStudentRecord(FILE *file, Student student) {
    if (file == NULL) {
        fprintf(stderr, "Error: File pointer is NULL.\n");
        return;
    }
    fprintf(file, "%d\n%s\n%.2f\n", student.rollNumber, student.name, student.marks);
}

void readStudentRecord(FILE *file, Student *student) {
    if (file == NULL) {
        fprintf(stderr, "Error: File pointer is NULL.\n");
        return;
    }
    fscanf(file, "%d\n", &student->rollNumber);
    fscanf(file, "%[^\n]\n", student->name);
    fscanf(file, "%f\n", &student->marks);
}

int main() {
    Student student1 = {101, "Alice Johnson", 88.5};
    Student student2;
    FILE *file;


    file = fopen("student.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    writeStudentRecord(file, student1);
    fclose(file);


    file = fopen("student.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    readStudentRecord(file, &student2);
    fclose(file);


    printf("Student Record:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}

