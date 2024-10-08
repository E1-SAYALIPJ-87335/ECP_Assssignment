#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right) {
        mid = left + (right - left) / 2;

      
        if (arr[mid] == target) {
            return mid;
        }
        
        else if (arr[mid] < target) {
            left = mid + 1;
        }
     
        else {
            right = mid - 1;
        }
    }

    
    return -1;
}

int main() {
    int size, target, index;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter %d elements (sorted in ascending order):\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the number to search for: ");
    scanf("%d", &target);

  
    index = binary_search(arr, size, target);

    
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

