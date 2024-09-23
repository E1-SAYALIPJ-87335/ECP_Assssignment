#include <stdio.h>

void printFibonacci(int n) 
{
    if (n <= 0) 
	{
        printf("Error: Number of terms must be positive.\n");
        return;
    }
   
	int a = 0, b = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
	{
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b; 
        a = b; 
        b = next; 
        printf("%d ", next);
    }
    printf("\n");
}

int main() 
{
    int n;

   
    printf("Enter the number : ");
    scanf("%d", &n);

  
    printFibonacci(n);

    return 0;
}

