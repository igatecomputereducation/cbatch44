#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=sal*13.0/100;
	da=sal*15.0/100;
	gross=sal+hra+da;
	printf("Salary %i\n",sal);
	printf("House Rent Allowence %f\n",hra);
	printf("Dearness Allowence %f\n",da);
	printf("Gross salary %f",gross);
	return 0;
}
