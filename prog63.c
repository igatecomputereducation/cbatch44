#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>=50000)
	{
		hra=sal*9.0/100;
		da=sal*13.0/100;
	}
	else
	{
		hra=sal*5.0/100;
		da=sal*7.0/100;
	}
	gross=sal+hra+da;
	printf("Salary %i\n",sal);
	printf("House Rent Allowence %f\n",hra);
	printf("Dearness Allowence %f\n",da);
	printf("Gross salary %f",gross);
	return 0;
}

