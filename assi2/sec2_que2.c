#include <stdio.h>

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    int choice;
    double num1, num2;
    printf("Select operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1,&num2);
   
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

void add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

