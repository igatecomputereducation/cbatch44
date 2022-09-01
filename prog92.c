#include<stdio.h>
int main()
{
	int n,gr;
	printf("Enter any natural number:");
	scanf("%i",&n);
	gr=(n%9==0)?9:n%9;
	switch(gr)
	{
		case 1:
		case 7:
		case 9:
			printf("Lucky");
			break;
		case 3:
		case 5:
			printf("Moderate");
			break;
		default:
			printf("Not a lucky number");
	}
	return 0;
}

