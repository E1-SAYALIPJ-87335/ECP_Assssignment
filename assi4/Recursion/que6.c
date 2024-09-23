#include <stdio.h>

void print_hexadecimal(unsigned int num) 
{
    printf("%X\n", num); 
}

int main() 
{
    unsigned int number;

    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    printf("Hexadecimal representation of %u is: ", number);
    print_hexadecimal(number);

    return 0;
}

