#include <stdio.h>

int calculate_maximum() {
    int num;
    int max;
    int first = 1; 

    printf("Enter numbers (enter -1 to finish):\n");

    while (1) {
        printf("Enter number: ");
        scanf("%d", &num);

        if (num == -1) {
            break; 
        }

        if (first) {
            max = num;
            first = 0; 
        } else if (num > max) {
            max = num;
        }
    }

    return max;
}


void menu_driven() {
    int choice;

    do {
        
        printf("\nMenu:\n");
        printf("1. Calculate Maximum Element\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int max = calculate_maximum();
                    printf("The maximum element is: %d\n", max);
                }
                break;
            case 2:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while (choice != 2);
}

int main() {
   
    menu_driven();
    return 0;
}

