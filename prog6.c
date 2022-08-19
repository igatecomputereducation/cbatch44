#include<stdio.h>
int main()
{
	int a,b,sm,sb,pro;
	float div;
	printf("Ek number dedo:");
	scanf("%i",&a);
	printf("Dusra number dedo:");
	scanf("%i",&b);
	sm=a+b;
	sb=a-b;
	pro=a*b;
	div=(float)a/b;
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",div);
	return 0;
}
