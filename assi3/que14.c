#include <stdio.h>

int isPrime(int number) 
{
    if (number <= 1) 
		return 0; 
    
    int divisor = 2;
    int isPrime = 1; 

    
    while(divisor * divisor <= number) 
	{
        if (number % divisor == 0) 
		{
            isPrime = 0; 
            break; 
        }
        divisor++;
    }

    return isPrime; 
}

int main() 
{
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (isPrime(number)) 
	
        printf("%d is a prime number.\n", number);
     else 
        printf("%d is not a prime number.\n", number);
    

    return 0;
}

