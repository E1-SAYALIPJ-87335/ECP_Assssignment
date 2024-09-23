#include<stdio.h>
int main()
{ 
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') 
        printf("UPPERCASE\n");
    else if (c >= 'a' && c <= 'z') 
        printf("LOWERCASE\n");
    else if (c >= '0' && c <= '9') 
        printf("DIGIT\n");
    else if (c == ' ' || c == '\t' || c == '\r' || c == '\n') 
        printf("SPACE\n");
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        printf("ALPHABET\n");
    else 
        printf("OTHER\n");
   

    return 0;
}

