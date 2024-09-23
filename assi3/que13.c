#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    if (n <= 0) 
	{
        printf("The number is not  positive\n");
        return 1;
    }

    
    int a = 1, b = 1, next;

    
    if (n >= 1) 
	{
        printf("%d", a);
    }
    if (n >= 2) 
	{
        printf(", %d", b);
    }

    for (int i = 3; i <= n; i++) 
	{
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}

