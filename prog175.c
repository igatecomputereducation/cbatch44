#include<stdio.h>
int main()
{
	int a[50],n,i,es,os;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	es=os=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			es=es+a[i];
		else
			os=os+a[i];
	}
	
	printf("Even elements sum %i\n",es);
	printf("Odd elements sum %i",os);
	return 0;
}

