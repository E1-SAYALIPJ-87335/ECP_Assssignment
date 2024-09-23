#include <stdio.h>
int main() 
{
    int month, year;
   
    printf("Enter month (1-12) and year :: ");
    scanf("%d%d", &month,&year);

    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12:
	       printf("Days = 31");
	       break;
        case 4:  
        case 6: 
        case 9:  
        case 11:
	       printf("Days = 30");
	       break;
        case 2:
	       if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		       printf("Days = 29");
	       else 
		       printf("Days = 28");
	       break;
        default:
            printf("Invalid month");
    }

}

