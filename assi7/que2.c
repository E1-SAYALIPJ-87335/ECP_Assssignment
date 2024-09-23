#include <stdio.h>

#define SIZE 3


void acceptMatrix(int matrix[SIZE][SIZE], const char *name) {
    printf("Enter the elements of matrix %s:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int matrix[SIZE][SIZE], const char *name) {
    printf("Matrix %s:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void add(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void sub(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}


void mult(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
    int sum[SIZE][SIZE], difference[SIZE][SIZE], product[SIZE][SIZE];
    
 
    acceptMatrix(matrix1, "A");
    acceptMatrix(matrix2, "B");

    
    add(matrix1, matrix2, sum);
    printMatrix(sum, "Sum");

    
    sub(matrix1, matrix2, difference);
    printMatrix(difference, "Difference");


    mult(matrix1, matrix2, product);
    printMatrix(product, "Product");

    return 0;
}

