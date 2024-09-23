#include <stdio.h>


void swapUsingXOR(int *a, int *b) {
    if (a != b) { 
        *a = *a ^ *b; 
        *b = *a ^ *b;
        *a = *a ^ *b; 
    }
}


int main() {
    int x, y;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swapUsingXOR(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

