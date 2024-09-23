#include <stdio.h>

void printCharacter(char character, int times) 
{
    if (times < 0) 
	{
        printf(" Number of times must be positive.\n");
        return;
    }
    
    for (int i = 0; i < times; i++) {
        printf("%c", character);
    }
    printf("\n"); 
}

int main() {
    char character;
    int times;
    
   
    printf("Enter the character to print: ");
    scanf(" %c", &character); 

    printf("Enter the number of times to print the character: ");
    scanf("%d", &times);
    
   
    printCharacter(character, times);
    
    return 0;
}

