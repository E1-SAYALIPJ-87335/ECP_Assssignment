#include <stdio.h>

int remove_duplicates(int arr[], int size) {
    if (size == 0) 
		return 0;

  
    int unique_index = 0;

    
    for (int i = 0; i < size; i++) {
        int is_duplicate = 0;

        
        for (int j = 0; j < unique_index; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }

    
        if (!is_duplicate) {
            arr[unique_index++] = arr[i];
        }
    }

  
    return unique_index;
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

    int unique_count = remove_duplicates(arr, size);

    
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of unique elements: %d\n", unique_count);

    return 0;
}

