#include <stdio.h>


unsigned char adjustEvenParity(unsigned char byte) {

    unsigned char count = 0;
    unsigned char temp = byte;
    

    while (temp) {
        count += temp & 1;
        temp >>= 1;
    }

   
    if (count % 2 == 0) {
       
        return byte;
    } else {

        return byte | 0x80; 
    }
}


int main() {
    unsigned char byte;
    printf("Enter a byte value (0-255): ");
    scanf("%hhu", &byte);

    unsigned char adjustedByte = adjustEvenParity(byte);
    printf("Original byte: 0x%02X\n", byte);
    printf("Adjusted byte: 0x%02X\n", adjustedByte);

    return 0;
}

