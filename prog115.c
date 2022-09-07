#include<stdio.h>
int main()
{
	int n,rev,temp;
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	temp=n;
	rev=0;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	
	if(rev==temp)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	
	return 0;
}

