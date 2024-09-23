#include <stdio.h>
#include <stddef.h>  


size_t strlen(const char* str) {
    const char *s = str;
    while (*s) ++s;
    return (size_t)(s - str);
}

char* strcpy(char *dest, const char *src) {
    char *d = dest;
    const char *s = src;
    while ((*d++ = *s++)) ;  
    return dest;
}


char* strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) ++d;  
    while ((*d++ = *src++)) ; 
    return dest;
}


int strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        ++str1;
        ++str2;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int stricmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2 || (*str1 | 0x20) == (*str2 | 0x20))) {
        ++str1;
        ++str2;
    }
    return (*(unsigned char *)str1 | 0x20) - (*(unsigned char *)str2 | 0x20);
}


char* strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;

    
    while (*end) ++end;
    --end;  

  
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }

    return str;
}


char* strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) return (char *)str;
        ++str;
    }
    return (*str == (char)ch) ? (char *)str : NULL;
}

char* strstr(const char *str, const char *substr) {
    if (!*substr) return (char *)str;  

    while (*str) {
        const char *s1 = str;
        const char *s2 = substr;
        while (*s1 && *s2 && *s1 == *s2) {
            ++s1;
            ++s2;
        }
        if (!*s2) return (char *)str;
        ++str;
    }
    return NULL;
}

int main() {
   
    const char *testStr = "Hello, World!";
    printf("Length of '%s': %zu\n", testStr, strlen(testStr));

    
    char dest[50];
    strcpy(dest, testStr);
    printf("Copied string: '%s'\n", dest);

   
    strcat(dest, " How are you?");
    printf("Concatenated string: '%s'\n", dest);

   
    printf("Comparison of 'hello' and 'hello': %d\n", strcmp("hello", "hello"));
    printf("Comparison of 'hello' and 'world': %d\n", strcmp("hello", "world"));

    
    printf("Case-insensitive comparison of 'HELLO' and 'hello': %d\n", stricmp("HELLO", "hello"));

    
    char revStr[] = "abcdef";
    strrev(revStr);
    printf("Reversed string: '%s'\n", revStr);

    
    printf("First occurrence of 'o' in 'Hello, World!': %s\n", strchr("Hello, World!", 'o'));

   
    printf("First occurrence of 'World' in 'Hello, World!': %s\n", strstr("Hello, World!", "World"));

    return 0;
}

