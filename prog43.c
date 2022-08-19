#include<stdio.h>
int main()
{
	int num,emf,a,b;
	num=45;
	emf=-30;
	a=0675;
	b=0xABC;
	printf("%i\n",num);
	printf("%8i\n",num);
	printf("%08i\n",num);
	printf("%-8ihello\n",num);
	printf("%+i\n",emf);
	printf("%+i\n",num);
	printf("%#8o\n",a);
	printf("%#8X\n",b);
	return 0;
}

