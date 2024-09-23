#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

void print_days_in_month(int month, int year) {
    int days;

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2: 
            if (is_leap_year(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Invalid month\n");
            return;
    }

    printf("Month %d in year %d has %d days\n", month, year, days);
}

int main() 
{
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    print_days_in_month(month, year);

    return 0;
}

