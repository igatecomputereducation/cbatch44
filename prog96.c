#include<stdio.h>
int main()
{
	printf("first\n");
	goto abc;
	printf("second\n");
	printf("third\n");
	abc:
	printf("fourth");
	return 0;
}

