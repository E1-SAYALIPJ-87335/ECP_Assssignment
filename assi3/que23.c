#include <stdio.h>

void printPascalsTriangle(int numRows) {
    
    int triangle[numRows][numRows];

    
    for (int i = 0; i < numRows; i++) {
        
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        
        
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    
    for (int i = 0; i < numRows; i++) {
        
        for (int j = 0; j < numRows - i - 1; j++) {
            printf("  ");
        }

        
        for (int j = 0; j <= i; j++) {
            printf("%4d", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numRows = 5; 
    printPascalsTriangle(numRows);
    return 0;
}


