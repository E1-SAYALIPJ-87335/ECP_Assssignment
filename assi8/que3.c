#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int roll_number;
    char name[100];
    float marks;
} Student;


void acceptStudentArray(Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Enter information for student %d:\n", i + 1);
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        

        while (getchar() != '\n');
        
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        

        size_t length = strlen(students[i].name);
        if (length > 0 && students[i].name[length - 1] == '\n') {
            students[i].name[length - 1] = '\0';
        }

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        

        while (getchar() != '\n');
    }
}


void printStudentArray(const Student students[], int num_students) {
    printf("Student Information:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}


int main() {
    int num_students;
    
 
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
   
    if (num_students <= 0 || num_students > MAX_STUDENTS) {
        printf("Invalid number of students. Please enter a value between 1 and %d.\n", MAX_STUDENTS);
        return 1;
    }


    Student students[num_students];
    

    acceptStudentArray(students, num_students);
    

    printStudentArray(students, num_students);
    
    return 0;
}

