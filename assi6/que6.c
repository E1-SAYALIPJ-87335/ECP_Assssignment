#include <stdio.h>

int isValidBase(int base) {
    return base >= 2 && base <= 36;
}

char digitToChar(int digit) {
    if (digit < 10) {
        return '0' + digit;
    } else {
        return 'a' + (digit - 10);
    }
}

void itoa(int value, int base, char *str) {
    if (!isValidBase(base)) {
        *str = '\0';  
        return;
    }

    
    int isNegative = 0;
    if (value < 0 && base == 10) {
        isNegative = 1;
        value = -value;
    }

    
    char temp[33]; 
    int i = 0;

    do {
        temp[i++] = digitToChar(value % base);
        value /= base;
    } while (value > 0);

    
    if (isNegative) {
        temp[i++] = '-';
    }

    
    int j;
    for (j = 0; j < i; j++) {
        str[j] = temp[i - j - 1];
    }
    str[i] = '\0';
}

int main() {
    char buffer[33];

    int number = 1234;
    int base = 10;
    itoa(number, base, buffer);
    printf("Base %d: %s\n", base, buffer);

    base = 2;
    itoa(number, base, buffer);
    printf("Base %d: %s\n", base, buffer);

    base = 16;
    itoa(number, base, buffer);
    printf("Base %d: %s\n", base, buffer);

    base = 36;
    itoa(number, base, buffer);
    printf("Base %d: %s\n", base, buffer);

    return 0;
}

