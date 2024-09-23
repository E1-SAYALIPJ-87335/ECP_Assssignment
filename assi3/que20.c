#include <stdio.h>

int main() 
{
    int num, i, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for (num = 2; num <= 100; num++) 
	{
        isPrime = 1; 

        
        for (i = 2; i * i <= num; i++) 
		{
            if (num % i == 0) 
			{
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) 
		{
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

/*
{
    int num, originalNum, sum, digit, count, temp;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) 
	{
        originalNum = num;
        sum = 0;
        count = 0;

        temp = originalNum;
        while (temp != 0) 
		{
            temp /= 10;
            count++;
        }

        temp = originalNum;
        while (temp != 0) 
		{
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

       
        if (sum == originalNum) 
		{
            printf("%d ", originalNum);
        }
    }

    printf("\n");

    return 0;
}
*/
