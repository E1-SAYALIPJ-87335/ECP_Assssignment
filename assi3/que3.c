#include <stdio.h>
#include <math.h>

int sumOfDigits(int number);
int reverseNumber(int number); 
int isPalindrome(int number); 
int isArmstrong(int number); 


int sumOfDigits(int number)
{
    int sum = 0;
    while (number > 0) 
	{
        sum =sum + number % 10;
        number = number/10;
    }
    return sum;
}


int reverseNumber(int number) 
{
    int reversed = 0;
    while (number > 0)
   	{
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int isPalindrome(int number) 
{
    return number == reverseNumber(number);
}


int isArmstrong(int number) 
{
    int original = number;
    int sum = 0;
    int digits = 0;
    
   
    while (number > 0) 
	{
        number = number/10;
        digits++;
    }

    number = original;

    
    while (number > 0) 
	{
        int digit = number % 10;
        sum = sum +pow(digit, digits);
        number /= 10;
    }
    
    return sum == original;
}

int main() {
    int number;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    
    int sum = sumOfDigits(number);
    printf("Sum of digits: ");
    int temp = number;
    while (temp > 0) 
	{
        printf("%d", temp % 10);
        temp = temp/10;
        if (temp > 0) 
		{
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    
    int reversed = reverseNumber(number);
    printf("Reversed number: %d\n", reversed);

    
    if (isPalindrome(number)) 
	
        printf("%d is a numeric palindrome\n", number);
    else 
        printf("%d is not a numeric palindrome\n", number);
   

   
    if (isArmstrong(number)) 
	
        printf("%d is an Armstrong number\n", number);
     else 
        printf("%d is not an Armstrong number\n", number);
   

    return 0;
}

