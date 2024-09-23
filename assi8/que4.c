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


Student* searchByRollNumber(const Student students[], int num_students, int roll_number) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            return (Student*)&students[i];
        }
    }
    return NULL;
}


Student* searchByName(const Student students[], int num_students, const char* name) {
    for (int i = 0; i < num_students; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return (Student*)&students[i]; 
        }
    }
    return NULL;
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
    

    int search_roll_number;
    printf("Enter roll number to search: ");
    scanf("%d", &search_roll_number);
    Student *student_by_roll = searchByRollNumber(students, num_students, search_roll_number);
    if (student_by_roll != NULL) {
        printf("Student found:\n");
        printStudentArray(student_by_roll, 1);
    } else {
        printf("Student with roll number %d not found.\n", search_roll_number);
    }
    
 
    char search_name[100];
    printf("Enter name to search: ");
    while (getchar() != '\n');
    fgets(search_name, sizeof(search_name), stdin);
    size_t length = strlen(search_name);
    if (length > 0 && search_name[length - 1] == '\n') {
        search_name[length - 1] = '\0';
    }
    Student *student_by_name = searchByName(students, num_students, search_name);
    if (student_by_name != NULL) {
        printf("Student found:\n");
        printStudentArray(student_by_name, 1);
    } else {
        printf("Student with name \"%s\" not found.\n", search_name);
    }
    
    return 0;
}

