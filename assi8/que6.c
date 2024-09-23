#include <stdio.h>


typedef enum {
    PRIMARY, 
    SECONDARY 
} StandardLevel;


typedef union {
    char grade; 
    float percentage; 
} Result;


typedef struct {
    char name[100];
    int roll_number;
    int standard; 
    StandardLevel level;
    Result result; 
} Student;


void acceptStudentInfo(Student *student) {
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);


    size_t length = strlen(student->name);
    if (length > 0 && student->name[length - 1] == '\n') {
        student->name[length - 1] = '\0';
    }

    printf("Enter roll number: ");
    scanf("%d", &student->roll_number);

    printf("Enter standard (1-10): ");
    scanf("%d", &student->standard);
    student->level = (student->standard <= 4) ? PRIMARY : SECONDARY;


    while (getchar() != '\n');

    if (student->level == PRIMARY) {
        printf("Enter result (Grade A, B, or C): ");
        scanf(" %c", &student->result.grade);
    } else {
        printf("Enter result (Percentage as float): ");
        scanf("%f", &student->result.percentage);
    }


    while (getchar() != '\n');
}


void printStudentInfo(const Student *student) {
    printf("Student Information:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->roll_number);
    printf("Standard: %d\n", student->standard);

    if (student->level == PRIMARY) {
        printf("Result: Grade %c\n", student->result.grade);
    } else {
        printf("Result: %.2f%%\n", student->result.percentage);
    }
}


int main() {
    Student students[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        printf("Information for student %d:\n", i + 1);
        printStudentInfo(&students[i]);
        printf("\n");
    }

    return 0;
}

