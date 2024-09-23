#include <stdio.h>

void printPascalsTriangle(int rows) {
    if (rows <= 0) {
        printf("Error: Number of rows must be positive.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        
        for (int space = 0; space < (rows - i - 1); space++) {
            printf(" ");
        }
        
        
        int value = 1; 
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1); 
        }
        printf("\n");
    }
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    
    printPascalsTriangle(rows);
    
    return 0;
}

