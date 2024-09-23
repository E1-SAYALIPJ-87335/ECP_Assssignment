#include <stdio.h>


int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void print_fibonacci_series(int terms) {
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

   
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    
    print_fibonacci_series(n);

    return 0;
}

