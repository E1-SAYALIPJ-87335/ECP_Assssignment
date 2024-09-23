#include <stdio.h>

int main() {
    int num , result;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

