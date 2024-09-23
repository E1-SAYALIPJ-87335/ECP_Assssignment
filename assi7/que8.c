#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
 
    if (argc < 2) {
        printf("No names provided. Please provide names as command line arguments.\n");
        return 1;
    }


    printf("Names before sorting:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }


    qsort(&argv[1], argc - 1, sizeof(char *), compare);

 
    printf("\nNames after sorting:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

