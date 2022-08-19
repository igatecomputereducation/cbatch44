#include<stdio.h>
int main()
{
	int bre,wid,hei,vol;
	
	printf("Enter Breadth, Width and height\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	vol=bre*wid*hei;
	printf("Volume of box %i",vol);
	return 0;
}
