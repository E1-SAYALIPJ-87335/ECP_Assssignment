#include <stdio.h>
#include <stdlib.h>


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


int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number1> [number2 ... numberN]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        char *endptr;
        unsigned int num = strtoul(argv[i], &endptr, 10);


        if (*endptr != '\0') {
            printf("Invalid number: %s\n", argv[i]);
            continue;
        }

        printf("Binary representation of %u: ", num);
        displayBinary(num);
    }

    return 0;
}

