#include<stdio.h>
void accept_arr(int n[], int len);
void print(int arr[], int len);

void accept_arr(int n[] , int len)
{
	int len;

        printf("Enter array length:");
        scanf("%d",&len);

        int arr[len];

        accept_arr( arr, len);

	printf("Enter array elements : \n");
	for(int i ; i<len ; i++)
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
