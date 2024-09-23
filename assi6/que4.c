#include <stdio.h>

int isCharInSet(char ch, const char *set) {
    while (*set) {
        if (*set == ch) {
            return 1;  
        }
        set++;
    }
    return 0;  
}

void removeChars(char *string2, const char *string1) {
    char *src = string2;  
    char *dst = string2;  
    
    while (*src) {
        if (!isCharInSet(*src, string1)) {
            *dst++ = *src;  
        }
        src++;
    }
    *dst = '\0';  
}

int main() {
    char string2[] = "Hello, World!";
    const char *string1 = "o,!";
    
    printf("Original string2: '%s'\n", string2);

    removeChars(string2, string1);

    printf("Modified string2: '%s'\n", string2);

    return 0;
}

