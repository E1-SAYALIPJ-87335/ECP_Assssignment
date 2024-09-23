#include<stdio.h>
int main()
{
	int a,b,res;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);

	if(b!=0)
	{
		res= a/b ;
		printf("Div= %d",res);

	}
	else
		printf("Invalid input");

	return 0;
}
