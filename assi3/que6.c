#include <stdio.h>

int main() {
    int num;

 
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d", i);
            if (i != num / 2) {
                printf(", ");
            }
        }
    }
    printf("\n");


    return 0;
}

