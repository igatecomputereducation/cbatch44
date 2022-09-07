#include<stdio.h>
int main()
{
	int ll,ul,i;
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	i=ul;
	while(i>=ll)
	{
		printf("%i\n",i);
		i--;
	}
	return 0;
}

