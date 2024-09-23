#include <stdio.h>


void calculate_max_min(int arr[], int size, int *max, int *min) {
    
    *max = arr[0];
    *min = arr[0];

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int size;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    int max, min;

   
    calculate_max_min(arr, size, &max, &min);

    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}

