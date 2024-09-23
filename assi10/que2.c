#include <stdio.h>


void displayBinary(unsigned int number) {
    int numBits = sizeof(number) * 8; 
	
	int leadingZero = 1; 
   
    for (int i = numBits - 1; i >= 0; --i) {
    
        int bit = (number >> i) & 1;

      
        if (bit == 1) {
            leadingZero = 0;
        }

        if (!leadingZero) { 
            printf("%d", bit);
        }
    }

    if (leadingZero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    displayBinary(num);

    return 0;
}

