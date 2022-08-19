#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	printf("Enter the marks in Mathematics, Physics and Chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total marks %i\n",tot);
	printf("Average marks %f",avg);
	return 0;
}
