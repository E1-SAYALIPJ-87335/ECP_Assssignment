#include <stdio.h>


unsigned long long factorial(int n) 
{
    unsigned long long result = 1; 
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
	printf("Factorial of %d is %llu\n", number, factorial(number));
    
    
    return 0;
}

