#include <stdio.h>
#include <stdlib.h>


int** allocateMatrix(int rows, int cols) 
{

    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) 
	{
        printf("Memory allocation failed!\n");
        exit(1);
    }


    for (int i = 0; i < rows; i++) 
	{
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) 
		{
            printf("Memory allocation failed!\n");

            for (int j = 0; j < i; j++)
		   	{
                free(matrix[j]);
            }
            free(matrix);
            exit(1);
        }
    }

    return matrix;
}


void freeMatrix(int** matrix, int rows) {

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }


    free(matrix);
}


void printMatrix(int** matrix, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;
    

    int** matrix = allocateMatrix(rows, cols);
    
 
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }
    
  
    printMatrix(matrix, rows, cols);
    
   
    freeMatrix(matrix, rows);
    
    return 0;
}

