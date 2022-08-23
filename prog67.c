#include<stdio.h>
int main()
{
	char gen;
	int age;
	printf("Enter your gender [m/f]:");
	scanf("%c",&gen);
	printf("Enter your age:");
	scanf("%i",&age);
	if(gen=='m')
	{
		if(age>=21)
			printf("Major");
		else
			printf("Minor");
	}
	else
	{
		if(age>=18)
			printf("Major");
		else
			printf("Minor");
	}
	return 0;
}

