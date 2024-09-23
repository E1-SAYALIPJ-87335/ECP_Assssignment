#include <stdio.h>

// Function to perform linear search and return the address of the element
int* linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i]; // Return the address of the element
        }
    }
    return NULL; // Return NULL if the element is not found
}

int main() {
    int size, target;
    int *result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    result = linear_search(arr, size, target);

    if (result != NULL) {
        printf("Element %d found at address %p.\n", target, (void*)result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

