#include <stdio.h>

void printPrimeFactors(int number) {
    printf("%d = ", number);
    
    
    int firstFactor = 1;
    
    
    while (number % 2 == 0) {
        if (!firstFactor) {
            printf(" * ");
        }
        printf("2");
        number /= 2;
        firstFactor = 0;
    }
    
    
    int factor = 3;
    while (factor * factor <= number) 
	{
        while (number % factor == 0) 
		{
            if (!firstFactor) 
			{
                printf(" * ");
            }
            printf("%d", factor);
            number /= factor;
            firstFactor = 0;
        }
        factor += 2; 
    }
    
    
    if (number > 2) 
	{
        if (!firstFactor) 
		{
            printf(" * ");
        }
        printf("%d", number);
    }
    
    printf("\n");
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    
    if (number <= 1) 
	{
        printf("Number should be greater than 1.\n");
        return 1;
    }

    
    printPrimeFactors(number);

    return 0;
}

