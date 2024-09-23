#include <stdio.h>
#include <stdlib.h>


void copyFile(FILE *src, FILE *dest) {
    int ch;


    if (src == NULL || dest == NULL) {
        fprintf(stderr, "Error: Invalid file pointer.\n");
        return;
    }


    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
   }
}


void displayFileContents(FILE *file) {
    int ch;


    if (file == NULL) {
        fprintf(stderr, "Error: Invalid file pointer.\n");
        return;
    }


    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
}


void writeToFile(FILE *file) {
    char buffer[256];


    if (file == NULL) {
        fprintf(stderr, "Error: Invalid file pointer.\n");
        return;
    }

    printf("Enter text to write to the file (end with an empty line):\n");
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        if (buffer[0] == '\n') {
            break;
        }
        fputs(buffer, file);
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


    copyFile(sourceFile, destFile);


    fclose(sourceFile);
    fclose(destFile);


    destFile = fopen(destFilename, "r");
    if (destFile == NULL) {
        perror("Error reopening destination file");
        return 1;
    }

    printf("\nContents of the destination file after copying:\n");
    displayFileContents(destFile);
    fclose(destFile);


    destFile = fopen(destFilename, "a");
    if (destFile == NULL) {
        perror("Error reopening destination file");
        return 1;
    }


    writeToFile(destFile);
    fclose(destFile);


    destFile = fopen(destFilename, "r");
    if (destFile == NULL) {
        perror("Error reopening destination file");
        return 1;
    }

    printf("\nFinal contents of the destination file:\n");
    displayFileContents(destFile);
    fclose(destFile);

    return 0;
}

