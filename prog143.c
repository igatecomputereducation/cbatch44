#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the table number:");
	scanf("%i",&n);
	
	for(i=1;i<=20;i++)
	{
		printf("%iX%i=%i\n",n,i,n*i);
	}
	
	return 0;
}

