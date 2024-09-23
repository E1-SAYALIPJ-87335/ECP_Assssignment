#include <stdio.h>
int main() {
    int number , result=1;

   
    printf("Enter a number: ");
    scanf("%d", &number);
 
    for (int i = 1; i <= number; i++) 
        result *= i;
   

    for (int i = 1; i <= number; i++) {
        printf("%d", i);
        if (i < number) {
            printf(" * ");
        }
    }
    printf(" = %d\n", result);

    return 0;
}

