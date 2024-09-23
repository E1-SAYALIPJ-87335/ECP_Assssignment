#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024 // Define a maximum line length


void copyFileLineByLine(FILE *src, FILE *dest) {
    char line[MAX_LINE_LENGTH]; 


    if (src == NULL || dest == NULL) {
        fprintf(stderr, "Error: Invalid file pointer.\n");
        return;
    }


    while (fgets(line, sizeof(line), src) != NULL) {
        fputs(line, dest);
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;


    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source file> <destination file>\n", argv[0]);
        return 1;
    }


    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }


    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }


    copyFileLineByLine(sourceFile, destFile);


    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}

