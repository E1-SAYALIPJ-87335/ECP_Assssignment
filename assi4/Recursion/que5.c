#include <stdio.h>

void print_binary(unsigned int num) {
 
    int num_bits = sizeof(num) * 8;

    int leading_zero = 1;

    
    for (int i = num_bits - 1; i >= 0; i--) {
        
        if ((num >> i) & 1) {
            leading_zero = 0; 
            printf("1");
        } else {
           
            if (!leading_zero) {
                printf("0");
            }
        }
    }

   
    if (leading_zero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int number;

    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    printf("Binary representation of %u is: ", number);
    print_binary(number);

    return 0;
}

