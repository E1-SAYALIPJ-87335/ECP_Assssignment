#include <stdio.h>

int isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int atoi(const char* string) {
    int result = 0;
    int sign = 1;

    
    if (*string == '-') {
        sign = -1;
        string++;
    } else if (*string == '+') {
        string++;
    }

    while (*string) {
        if (isDigit(*string)) {
            result = result * 10 + (*string - '0');
        } else {
            
            break;
        }
        string++;
    }

    return sign * result;
}

int main() {
    const char *numStr1 = "12345";
    const char *numStr2 = "-6789";
    const char *numStr3 = "+9876";
    const char *numStr4 = "12a34";  

    printf("String '%s' to integer: %d\n", numStr1, atoi(numStr1));
    printf("String '%s' to integer: %d\n", numStr2, atoi(numStr2));
    printf("String '%s' to integer: %d\n", numStr3, atoi(numStr3));
    printf("String '%s' to integer: %d\n", numStr4, atoi(numStr4)); 

    return 0;
}

