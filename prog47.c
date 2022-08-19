#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	
	if(n==0)
		printf("zero");
	if(n>0)
		printf("Positive");
	if(n<0)
		printf("Negative");
	
	return 0;
}

