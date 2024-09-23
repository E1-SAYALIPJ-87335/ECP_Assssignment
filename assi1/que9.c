#include<stdio.h>
int main()
{
	double cel, fah, resc,resf,val ;

       printf("Enter the tempreture");
       scanf("%lf",&val);

       resc = (((val-32)*5)/9);

       resf = (((9*val)/5)+32);
       printf("temp in cel=%.2lf and fah = %.2lf",resc, resf);
       return 0 ;
}

