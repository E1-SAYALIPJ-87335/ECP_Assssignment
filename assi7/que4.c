#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 100


void acceptNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("Enter the names of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        

        size_t length = strlen(names[i]);
        if (length > 0 && names[i][length - 1] == '\n') {
            names[i][length - 1] = '\0';
        }
    }
}


void printNames(const char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("Student Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}


void sortNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {

                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    

    acceptNames(names);
    

    printNames(names);
    

    sortNames(names);
    

    printf("Sorted Student Names:\n");
    printNames(names);
    
    return 0;
}

