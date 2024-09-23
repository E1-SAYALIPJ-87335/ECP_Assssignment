#include <stdio.h>


int gcd(int a, int b) 
{
    int remainder;
    
    
    printf("%d %% %d = %d\n", a, b, a % b);

        while (b != 0) 
		{
        remainder = a % b;
        printf("%d %% %d = %d\n", a, b, remainder);
        a = b;
        b = remainder;
        }

    return a;
}

int main() 
{
    int num1, num2;

   
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    if (num1 <= 0 || num2 <= 0) 
	{
        printf("Numbers should be positive integers.\n");
        return 1;
    }

    
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

