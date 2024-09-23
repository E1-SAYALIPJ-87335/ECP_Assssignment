#include<stdio.h>
void accept(float *n , int len);
void print(float *n , int len);

int main(void)
{

	float marks[5];
	accept(marks , 5);
	print(marks , 5);
	
	return 0;
}
void accept(float *n , int len)
{
	printf("Enter marks:: \n");
	for(int i ;i< len ; i++)
		scanf("%f",&n[i]);
}
void print(float *n , int len)
{
	float sum=0 , avg ;
	printf("marks : \n");
	for(int i=0; i< len; i++) 
	{
	        sum =sum+n[i];
	        avg =sum/len;	
	}
	printf("sum = %.2lf\n",sum);
	printf("Avg = %.2lf\n",avg);
}

