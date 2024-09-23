#include<stdio.h>
void accept_arr(int arr[len]);
void print(int arr[],int len);
void reverse(int n,int arr[]);
int main(void)
{
	int len,n;
	int arr[len];

	printf("Enter array length:");
        scanf("%d",&len);

	accept_arr(arr[len]);
	print( arr, len);
	reverse(n,arr);
}
void reverse(int n,int arr[])
{
	int i,j=0,rev[j];
	for(i=n-1; i>=0;i--)
	{
		rev[j]=arr[i];
		j++;
	}
	printf("%d");
}

void accept_arr(int arr[len])
{


       

	printf("Enter array elements : \n");
	for(int i;i<len;i++)
	{
		scanf("%d",&n[len]);

	}

	print(n,len);
	
}
 
void print(int arr[], int len)
{
	printf("Array elements::");
	for(int i; i<len ; i++)
		printf("%d\n",arr[len]);
	printf("\n");
}
