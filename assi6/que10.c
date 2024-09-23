#include <stdio.h>


int strlen_custom(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int strcmp_custom(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}


void strncpy_custom(char *dest, const char *src, int n) {
    while (n-- && (*src != '\0')) {
        *dest++ = *src++;
    }
    *dest = '\0';  
}


void strcat_custom(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while ((*dest++ = *src++)) {
      
    }
}


void findAndReplace_custom(char *source, const char *find, const char *replace, char *result) {
    char *srcPos = source;
    char *resPos = result;
    int findLen = strlen_custom(find);
    int replaceLen = strlen_custom(replace);
    

    *result = '\0';

    while (*srcPos) {

        if (strcmp_custom(srcPos, find) == 0) {

            strncpy_custom(resPos, replace, replaceLen);
            resPos += replaceLen;
            srcPos += findLen;  
		} else {

            *resPos++ = *srcPos++;
        }
    }
    

    *resPos = '\0';
}

int main() {
    char source[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";
    char result[1024]; 

    findAndReplace_custom(source, find, replace, result);

    printf("Source: %s\n", source);
    printf("Find: %s\n", find);
    printf("Replace: %s\n", replace);
    printf("Output: %s\n", result);

    return 0;
}

