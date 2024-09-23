#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 100


void acceptNames(char *names[MAX_STUDENTS]) {
    printf("Enter the names of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("Student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        

        size_t length = strlen(names[i]);
        if (length > 0 && names[i][length - 1] == '\n') {
            names[i][length - 1] = '\0';
        }
    }
}


void printNames(char *names[MAX_STUDENTS]) {
    printf("Student Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}


void sortNames(char *names[MAX_STUDENTS]) {
    char *temp;
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}


void freeMemory(char *names[MAX_STUDENTS]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[MAX_STUDENTS];
    

    acceptNames(names);
    

    printNames(names);
    

    sortNames(names);
    

    printf("Sorted Student Names:\n");
    printNames(names);
    

    freeMemory(names);
    
    return 0;
}

