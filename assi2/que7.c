#include<stdio.h>
int main()
{
	int year ;

	printf("Enter year:: ");
	scanf("%d",&year);
/*    
  without logical operator
 
	if(year%400 == 0)
		printf("%d is Leap year and Days = 366",year);
	if(year%100 == 0)
		printf("%d is not  Leap year and Days = 365",year);
	if(year%4==0)
		printf("%d is Leap year and Days = 366",year);
	else
		printf("%d is not Leap year and Days = 365",year);

*/

/* using logical operators

	if(year%400 == 0)
		printf("%d is Leap year and Days = 366",year);
	else if(year % 4 ==0 && year % 100 !=0)
		printf("%d is Leap year and Days = 366",year);
	else 
		printf("%d is not Leap year and Days = 365",year);
	return 0;
*/

/*	using conditional operator */

	(year%400==0 || year%4==0 && year%100 != 0)? 
		printf("%d is Leap year and Days = 366",year):
		printf("%d is not Leap year and Days = 365",year);
	return 0;
}
