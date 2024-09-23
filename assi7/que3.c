#include <stdio.h>

#define SIZE 3


void acceptMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int matrix[SIZE][SIZE]) {
    printf("Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int sumOfRow(int matrix[SIZE][SIZE], int row) {
    int sum = 0;
    if (row >= 0 && row < SIZE) {
        for (int j = 0; j < SIZE; j++) {
            sum += matrix[row][j];
        }
    } else {
        printf("Error: Row index out of bounds.\n");
    }
    return sum;
}


int sumOfColumn(int matrix[SIZE][SIZE], int column) {
    int sum = 0;
    if (column >= 0 && column < SIZE) {
        for (int i = 0; i < SIZE; i++) {
            sum += matrix[i][column];
        }
    } else {
        printf("Error: Column index out of bounds.\n");
    }
    return sum;
}

int main() {
    int matrix[SIZE][SIZE];
    int row, column;
    

    acceptMatrix(matrix);
    

    printMatrix(matrix);
    

    printf("Enter the row index (0 to %d) to calculate the sum: ", SIZE-1);
    scanf("%d", &row);
    printf("Sum of elements in row %d: %d\n", row, sumOfRow(matrix, row));
    
    printf("Enter the column index (0 to %d) to calculate the sum: ", SIZE-1);
    scanf("%d", &column);
    printf("Sum of elements in column %d: %d\n", column, sumOfColumn(matrix, column));
    
    return 0;
}

