#include<stdio.h>
int main()
{
	int n;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	if(n/1000==n%10)
	{
		if(n/100%10==n/10%10)
			printf("Palindrome");
		else
			printf("Not a palindrome");
	}
	else
		printf("Not a palidrome");
	return 0;
}

