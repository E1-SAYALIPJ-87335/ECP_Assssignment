#include<stdio.h>
int main()
{
	int num,rem, rev,num2 ;
	printf("Enter 5 digit number");
	scanf("%d",&num);
	num2=num;

	while(num != 0)
	{
		rem = num %10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if (num2==rev)
	printf("%d is palindrome",num2);
	else
	printf("%d is not palindrome",num2);
}
