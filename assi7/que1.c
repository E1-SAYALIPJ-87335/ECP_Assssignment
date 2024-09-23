#include <stdio.h>


void accept(int rows, int cols, int array[rows][cols]) {
    printf("Enter the elements of the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}


void print(int rows, int cols, int array[rows][cols]) {
    printf("The %d x %d array is:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    int array[rows][cols];
    

    accept(rows, cols, array);
    

    print(rows, cols, array);
    
    return 0;
}

