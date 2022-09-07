#include<stdio.h>
int main()
{
	int n,max;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	max=n%10;
	while(n!=0)
	{
		if(n%10>max)
			max=n%10;
		n=n/10;
	}
	
	printf("maximum %i",max);
	return 0;
}

