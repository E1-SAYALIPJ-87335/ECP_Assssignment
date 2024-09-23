#include <stdio.h>


int isPrime(int num) {
    int i;
    if (num <= 1) return 0;  
    if (num == 2 || num == 3) return 1;  
    if (num % 2 == 0 || num % 3 == 0) return 0; 

    
    for (i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0; 
    }
    
    return 1;  
}

int main() {
    int start, count = 0;
    int num = 0;

   
    printf("Enter a number: ");
    scanf("%d", &start);

    printf("First 5 prime numbers after %d are:\n", start);

    
    num = start + 1; 
    
    while (count < 5) {
        
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    printf("\n");

    return 0;
}

