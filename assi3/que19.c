#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start and end of the range (e.g., 3 6): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= 10; i++) 
	{
       
        for (int j = start; j <= end; j++) 
		{
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

