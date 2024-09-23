#include <stdio.h>

int countOneBits(unsigned int number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;        
    }
    return count;
}


int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    int result = countOneBits(num);
    printf("Number of 1 bits: %d\n", result);

    return 0;
}

