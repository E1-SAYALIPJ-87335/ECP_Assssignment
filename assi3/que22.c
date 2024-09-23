#include <stdio.h>

void printStarPattern() {
    printf("Star Pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printNumberTriangle() {
    printf("\nNumber Triangle:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printStarInvertedTriangle() {
    printf("\nInverted Star Triangle:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printDescendingNumberTriangle() {
    printf("\nDescending Number Triangle:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printAlphabetDiamond() {
    printf("\nAlphabet Diamond:\n");
    char startChar;
    
    for (char i = 'G'; i >= 'A'; i -= 2) {
        startChar = i;
        for (char ch = startChar; ch <= 'G'; ch++) {
            printf("%c ", ch);
        }
        for (char ch = 'G' - 1; ch >= startChar; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    
    for (char i = 'E'; i >= 'A'; i -= 2) {
        startChar = i;
        for (char ch = startChar; ch <= 'G'; ch++) {
            printf("%c ", ch);
        }
        for (char ch = 'G' - 1; ch >= startChar; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

void printAlphabetMatrix() {
    printf("\nAlphabet Matrix:\n");
    char ch = 'A';
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 4 - i; j++) {
            printf("%c ", ch + j);
        }
        printf("\n");
        ch++;
    }
}

int main() {
    printStarPattern();
    printNumberTriangle();
    printStarInvertedTriangle();
    printDescendingNumberTriangle();
    printAlphabetDiamond();
    printAlphabetMatrix();
    return 0;
}

