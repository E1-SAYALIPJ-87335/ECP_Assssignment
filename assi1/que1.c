#include<stdio.h>
int main()
{ 
	int a , b, add,sub,mult ;
	signed add1 , sub1 , mult1 ;
	unsigned add2 , sub2 , mult2 ;
	char add3 , sub3 , mult3 ;
	float add4 , sub4 , mult4 ;
	printf("Enter two numbers :: ");
	scanf("%d %d",&a,&b);

	add= a+b;
	add1= a+b;
	add2= a+b;
	add3= a+b;
	add4= a+b;
	printf("Addition is:: %d \n signed add  "  ,add);

	sub = a-b;
	printf("Difference is:: %d",sub);
	mult = a*b;
	printf("multiplication is:: %d",mult);
	return 0;

}
