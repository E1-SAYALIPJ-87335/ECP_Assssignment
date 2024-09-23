#include<stdio.h>
int main()
{
	int day , month , year ;

	printf("Enter month 1-12 and year");
	scanf("%d %d", &month,&year);
/* using if else ladder */
	if(month==1 || month==3 || month==5 || month ==7|| month == 10 ||month == 12)
		printf("Days :: 31");

	else if(month == 4 || month == 6|| month == 9|| month == 11)
		printf("Days :: 30");
	else if(month==2)
	{
		if((year % 400 ==0)||(year%4 && year%100 !=0))
			printf("Days : 29");
		else 
			printf("Days : 28");
	}
	else 
		printf("Invalid month");

	return 0;
/* using logical operators 
   
     int days = (month == 2) ? ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ? 29 : 28) :
           (month == 4 || month == 6 || month == 9 || month == 11) ? 30 :
           (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 :
           -1; 

    if (days == -1) 
        printf("Invalid month entered");
    else 
	    printf("Days : %d",days);

    return 0;
*/


}
