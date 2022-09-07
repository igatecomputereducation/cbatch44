#include<stdio.h>
int main()
{
	int n,min;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	min=n%10;
	while(n!=0)
	{
		if(n%10<min)
			min=n%10;
		n=n/10;
	}
	
	printf("Minimum %i",min);
	return 0;
}

