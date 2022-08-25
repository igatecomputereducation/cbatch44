#include<stdio.h>
int main()
{
	char type;
	int cmr,pmr,nu;
	float uch,bill;
	printf("Type of connection [d/c/i/a]:");
	scanf("%c",&type);
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	if(type=='d')
	{
		if(nu>500)
			uch=9.50;
		else if(nu>=401)
			uch=7.30;
		else if(nu>=301)
			uch=6.75;
		else if(nu>=151)
			uch=5.25;
		else
			uch=4.75;
	}
	else if(type=='c')
	{
		if(nu>500)
			uch=13.50;
		else if(nu>=151)
			uch=9.75;
		else
			uch=7.35;
	}
	else if(type=='i')
		uch=12.25;
	else
		uch=0.50;
	
	bill=nu*uch;
	printf("No of units %i\n",nu);
	printf("Unit charge %f\n",uch);
	printf("Bill %f",bill);
	return 0;
}

