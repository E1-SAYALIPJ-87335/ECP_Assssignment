#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter a number ::");
	scanf("%d",&a);

	num = a;
        a = a/1000;
        num = num%1000;
	b =num/100;
        num = num%100;
	c = num/10;
	num= num%10;
	d=num;
	printf("%d  %d  %d  %d\n",a*1000,b*100,c*10,d);
	printf("%d %d %d %d\n",a,b,c,d);
	//printf("%d%d%d%d",a*1000,b*100,c*10,d);
        printf("%d %d %d %d",d,c,b,a);
	return 0 ;

}
