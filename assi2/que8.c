#include<stdio.h>
int main()
{
	int quantity ;
	float unitprice = 5.0 , discount = 0.0, totalprice ;

	printf("Enter the quantity : ");
	scanf("%d", &quantity);

	totalprice = quantity * unitprice ;

	if(quantity > 50)
	{	discount = 0.15;
		totalprice = totalprice * (1 - discount);
	}
	else if(quantity > 30)
	{
		discount = 0.10;
		totalprice = totalprice * (1 - discount);
	}

	printf("Price after discount : %.2f",totalprice);
	return 0;
}


