#include<stdio.h>
int main()
{

	int empid , dep;
	char des;
	printf("Enter empID , DeptNO, Designationcode ::");
	scanf("%d%d%c",&empid,&dep,&des);

	printf("EmpID : %d \n DeptNo : %d \n",empid,dep);
	scanf("%c",&des);

	switch(des)
	{
		case 'M':
			printf("Dept Name: Marketing , Designation : Manager\n");

			break;

		case 'S':	
			printf("Dept Name: Management , Designation : Supervisor\n");
			break ;

		case 's':
			printf("Dept Name: Sales , Designation : Security Officer\n");
			break ;

		case 'C':
			printf("Dept Name: Designing , Designation : Clerk\n");
			break;
	}
}
