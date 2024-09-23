#include <stdio.h>


double power(double base, int exponent) 
{
    double result = 1.0;
    int absExponent = (exponent < 0) ? -exponent : exponent;

    for (int i = 0; i < absExponent; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result; 
    }

    return result;
}

int main() 
{
    double base;
    int exponent;
    
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    
    double result = power(base, exponent);
    printf("%lf raised to the power of %d is %lf\n", base, exponent, result);
    
    return 0;
}

