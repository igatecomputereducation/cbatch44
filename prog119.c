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
	
	if(count==2)
		printf("Prime number");
	else
		printf("Not a prime number");
		
	return 0;
}

