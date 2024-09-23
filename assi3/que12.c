#include <stdio.h>

int main() {
    int n, i;
    int first = 1, second = 1, next;

   
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("%d", first);
    }

   
    if (n >= 2) {
        printf(", %d", second);
    }

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

