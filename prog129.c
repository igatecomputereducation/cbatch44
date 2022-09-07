#include<stdio.h>
int main()
{
	int i,n,sum,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);

	for(sum=0,es=0,os=0,i=1;i<=n;i++)
	{
		sum=sum+i;
		if(i%2==0)
			es=es+i;
		else 
			os=os+i;
	}
	
	printf("Sum of all the numbers %i\n",sum);
	printf("Sum of even numbers %i\n",es);
	printf("Sum of odd numbers %i",os);
	return 0;
}

