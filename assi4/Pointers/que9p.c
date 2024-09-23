#include<stdio.h>
int calc(int n1 , int n2, int *pdiff , int *pmult , int *pdiv);
int main()
{
	int n1 , n2, add ,sub , mult , div;
	printf("Enter two values ::");
	scanf("%d%d",&n1 ,&n2);

	printf("Add = %d",calc(n1,n2,&sub,&mult,&div));
       
	return 0 ;

}


int calc(int n1 , int n2, int *pdiff , int *pmult , int *pdiv)
{
	int ch;
	printf("Enter operator ::\n 1.Add \n 2.Sub \n 3.mult \n 4. Div \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : return n1+n2;
			 break;
			 
		case 2 :
			 *pdiff = n1 - n2 ;
			 printf("substraction = %d\n",*pdiff);
			 break ;
		case 3 :
			 *pmult = n1 * n2;
			 printf("multiplication = %d\n",*pmult);
			 break;
		case 4	: 
			 if(n2==0)
				 printf("Error");
			 else
			 {
				 *pdiv = n1/n2;
				 printf("division = %d\n",*pdiv); 
			 }
	}

}



