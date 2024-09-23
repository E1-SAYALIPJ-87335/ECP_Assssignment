#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024 


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

int main() {
    FILE *sourceFile, *destFile;
    char srcFilename[100], destFilename[100];


    printf("Enter the source file name: ");
    fgets(srcFilename, sizeof(srcFilename), stdin);
    srcFilename[strcspn(srcFilename, "\n")] = '\0';

    printf("Enter the destination file name: ");
    fgets(destFilename, sizeof(destFilename), stdin);
    destFilename[strcspn(destFilename, "\n")] = '\0';


    sourceFile = fopen(srcFilename, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }


    destFile = fopen(destFilename, "w");
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

