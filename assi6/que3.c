#include <stdio.h>

void removeChar(char *str, char charToRemove) 
{
    char *src = str;  
    char *dst = str;  
    
    while (*src) 
	{
        if (*src != charToRemove) 
		{
            *dst++ = *src;  
        }
        src++;
    }
    *dst = '\0';  
}

int main() 
{
    char str[] = "Hello, World!";
    char charToRemove = 'o';

    printf("Original string: '%s'\n", str);

    removeChar(str, charToRemove);

    printf("Modified string: '%s'\n", str);

    return 0;
}

