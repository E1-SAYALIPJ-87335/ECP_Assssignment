#include<stdio.h>
#include<math.h>
int main()
{

	double a,b,c,per, area,s;
	 printf("Enter three side of triangle");
	 scanf("%lf %lf %lf",&a,&b,&c);

	 per = a+b+c*a+b+c ;
	 area = (s*(s-a)*(s-b)*(s-c));
	 printf("Perimeter of triangle is :: %.2lf",per);
	 printf("Area of triangle is :: %lf", sqrt(area));
	 return 0; 
}



