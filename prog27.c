#include<stdio.h>
int main()
{
	float a,b,c,d;
	a=12.45;
	b=23.12;
	c=1245E-2;
	d=2312E-2;
	printf("%f\n",a+b);
	printf("%f\n",c+d);
	printf("%e\n",a+b);
	printf("%e",c+d);
	return 0;
}

