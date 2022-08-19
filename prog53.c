#include<stdio.h>
int main()
{
	int dig;
	printf("Enter any digit [0-6]:");
	scanf("%i",&dig);
	if(dig==0)
		printf("Sunday");
	if(dig==1)
		printf("Monday");
	if(dig==2)
		printf("Tuesday");
	if(dig==3)
		printf("Wednesday");
	if(dig==4)
		printf("Thursday");
	if(dig==5)
		printf("Friday");
	if(dig==6)
		printf("Satarday");
	if(dig<0)
		printf("Invalid day");
	if(dig>6)
		printf("Invalid day");
	
	return 0;
}

