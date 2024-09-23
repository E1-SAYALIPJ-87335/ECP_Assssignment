#include <stdio.h>

int main() {
    int num , pair;

    
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
		pair = num / i;
            
            if (i <= pair)  
                printf("%d * %d = %d\n", i, pair, num);
    }

 

    return 0;
}

