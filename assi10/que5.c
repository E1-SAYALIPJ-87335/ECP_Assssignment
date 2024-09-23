#include <stdio.h>
#include <ctype.h>


void checkAndXOR(char ch) {

    if (isalpha(ch)) {

        char result = ch ^ 32;


        printf("Original character: %c\n", ch);
        printf("Character after XOR with 32: %c\n", result);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }
}


int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    checkAndXOR(ch);

    return 0;
}

