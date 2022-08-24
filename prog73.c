#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter marks in maths,phy and che\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35 && phy>=35 && che>=35)
		printf("pass");
	else
		printf("Fail");
	return 0;
}

