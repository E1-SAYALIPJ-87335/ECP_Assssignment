#include <stdio.h>

int main() 
{
    int number, result = 1;

   
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = number; i > 0; i--) {
        result *= i;
    }

    for (int i = number; i > 0; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }

    printf(" = %d\n", result);

    return 0;
}

