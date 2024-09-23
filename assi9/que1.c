#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int ch;


    printf("Enter the name of the file to read: ");
    fgets(filename, sizeof(filename), stdin);


    size_t length = strlen(filename);
    if (length > 0 && filename[length - 1] == '\n') {
        filename[length - 1] = '\0';
    }


    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }


    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }


    fclose(file);

    return 0;
}

