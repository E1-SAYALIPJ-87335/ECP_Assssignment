#include <stdio.h>

int dayOfWeek(int day, int month, int year) {
   
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + 2 * month + 3 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    return (dayOfWeek + 7) % 7;
}

int main() {
    int day, month, year;
    
  
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
   
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
        printf("Invalid date!\n");
        return 1;
    }
    
    int weekDay = dayOfWeek(day, month, year);
    
    switch (weekDay) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        default: printf("Error\n"); break;
    }

    return 0;
}

