#include <stdio.h>

// Define a structure to store student information with bit fields
typedef struct {
    unsigned int standard : 4;  // Standard (0-15, but we will use 1-12 for 1st to 12th standard)
    unsigned int gender : 1;    // Gender (0 for male, 1 for female)
    unsigned int age : 6;       // Age (0-32)
    unsigned int roll_number;   // Roll number (assuming up to 65535 is enough, so use standard int)
    char name[100];             // Student's name
} Student;

// Function to accept student information from the user
void acceptStudentInfo(Student *student) {
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);

    // Remove newline character from name if present
    size_t length = strlen(student->name);
    if (length > 0 && student->name[length - 1] == '\n') {
        student->name[length - 1] = '\0';
    }

    printf("Enter roll number: ");
    scanf("%d", &student->roll_number);

    printf("Enter standard (1-12): ");
    scanf("%u", &student->standard);

    printf("Enter gender (0 for male, 1 for female): ");
    scanf("%u", &student->gender);

    printf("Enter age (0-32): ");
    scanf("%u", &student->age);

    // Clear the input buffer
    while (getchar() != '\n');
}

// Function to print student information
void printStudentInfo(const Student *student) {
    printf("Student Information:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %u\n", student->roll_number);
    printf("Standard: %u\n", student->standard);
    printf("Gender: %s\n", student->gender == 0 ? "Male" : "Female");
    printf("Age: %u\n", student->age);
}

// Example usage of the functions
int main() {
    Student students[3];

    // Accept information for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
        printf("\n");
    }

    // Print information for the 3 students
    for (int i = 0; i < 3; i++) {
        printf("Information for student %d:\n", i + 1);
        printStudentInfo(&students[i]);
        printf("\n");
    }

    return 0;
}

