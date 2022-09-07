#include<stdio.h>
int main()
{
	int n,i,count;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	count=0;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			count++;
		i++;
	}
	
	printf("Number of factors %i",count);
	return 0;
}

