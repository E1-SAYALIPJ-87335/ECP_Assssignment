#include<stdio.h>
void swap_num(int *pn1 , int *pn2);
int main()
{
	int n1 =40, n2= 20;
	printf("Main :: Before swap : n1 = %d , n2 = %d\n",n1,n2);
	swap_num(&n1,&n2);
	printf("Main :: After swap : n1 = %d , n2 = %d\n",n1,n2);

}
void swap_num(int *pn1 , int *pn2)
{

	printf("main :: Before swap : n1 = %d , n2 = %d\n",*pn1,*pn2);

	int temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	printf("main :: After swap : n1 = %d , n2 = %d\n",*pn1,*pn2);
}
