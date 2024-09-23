#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strrev(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int stricmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && tolower(*s1) == tolower(*s2)) {
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main() {
    char str1[100] = "Hello, World!";
    char str2[100];
    char str3[100];
    char *token;

   
    printf("Length of str1: %lu\n", strlen(str1));
    
    strcpy(str2, str1);
    printf("str2 after strcpy(): %s\n", str2);
    
    strcat(str2, " How are you?");
    printf("str2 after strcat(): %s\n", str2);
    
    int cmp = strcmp(str1, str2);
    printf("strcmp() result: %d\n", cmp);
    
    int icmp = stricmp(str1, "hello, world!");
    printf("stricmp() result: %d\n", icmp);
    
    strrev(str2);
    printf("str2 after strrev(): %s\n", str2);
    
    char *ch = strchr(str1, 'W');
    if (ch) {
        printf("Character 'W' found in str1 at position: %ld\n", ch - str1);
    } else {
        printf("Character 'W' not found in str1\n");
    }
    
    char *sub = strstr(str2, "you");
    if (sub) {
        printf("Substring 'you' found in str2 at position: %ld\n", sub - str2);
    } else {
        printf("Substring 'you' not found in str2\n");
    }
    
   
    strncpy(str3, str1, 5);
    str3[5] = '\0'; 
    printf("str3 after strncpy(): %s\n", str3);
    
    int ncmp = strncmp(str1, "Hello, World!", 5);
    printf("strncmp() result: %d\n", ncmp);
    
    strncat(str2, " Have a great day!", 6);
    printf("str2 after strncat(): %s\n", str2);
    
    printf("Tokenizing str2 with ' ' as delimiter:\n");
    token = strtok(str2, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

