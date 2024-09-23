/*#include<stdio.h>
void addmult(int *pn1, int *pn2);
int main()
{
	int n1 = 10 , n2=20;   //local declaration

	addmult(&n1,&n2);

}
void addmult(int *pn1 ,int *pn2)
{
	int res = *pn1 + *pn2;
	printf("Addition:: %d\n",res);

	int res2 = *pn1 * *pn2;
	printf("Multiplication :: %d\n",res2);
}
*/


/* global declaration*/

#include<stdio.h>
void addmult(int *pa ,int *pb);
int a=10 , b=20;

int main()
{
	addmult(&a , &b);
	return 0;
}

void addmult(int *pa ,int *pb)
{
int res = *pa + *pb;
        printf("Addition:: %d\n",res);

        int res2 = *pa * *pb;
        printf("Multiplication :: %d\n",res2);
}
