#include<stdio.h>
int main()
{
	float x;
	x=22.0/7;
	printf("%f\n",x);
	printf("%.2f\n",x);
	printf("%10.2f\n",x);
	printf("%010.2f\n",x);
	printf("%+.2f\n",x);
	printf("%-10.2fhello\n",x);
	return 0;
}

