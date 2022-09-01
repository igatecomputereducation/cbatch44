#include<stdio.h>
int main()
{
	int x=35;
	switch(x+15)
	{
		case 40:
			printf("first\n");
			break;
		case 50:
			printf("Second\n");
			break;
		case 70:
			printf("Third\n");
			break;
		default:
			printf("fourth");
	}
	return 0;
}

