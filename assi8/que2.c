#include <stdio.h>
#include <string.h>


typedef struct {
    int roll_number;
    char name[100];
    float marks;
} Student;


void acceptStudentInfo(Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->roll_number);
    

    while (getchar() != '\n');

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);


    size_t length = strlen(student->name);
    if (length > 0 && student->name[length - 1] == '\n') {
        student->name[length - 1] = '\0';
    }

    printf("Enter marks: ");
    scanf("%f", &student->marks);
}


void printStudentInfo(const Student *student) {
    printf("Student Information:\n");
    printf("Roll Number: %d\n", student->roll_number);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
}


int main() {
    Student student;
    

    acceptStudentInfo(&student);
    

    printStudentInfo(&student);
    
    return 0;
}

