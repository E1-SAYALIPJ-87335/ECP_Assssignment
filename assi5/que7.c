#include <stdio.h>


void bubble_sort(int arr[], int size) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        
        for (j = 0; j < size - i - 1; j++) {
          
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

   
    bubble_sort(arr, size);

    printf("Array after sorting:\n");
    print_array(arr, size);

    return 0;
}

