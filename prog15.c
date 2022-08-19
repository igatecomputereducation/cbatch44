#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("Present month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	bill=nu*9.25;
	printf("Number of units %i\n",nu);
	printf("Total bill %f",bill);
	return 0;
}
