#include<stdio.h>
int main()
{
	int a[50],b[50],n,m,i;
	
	printf("Size of 1st array:");
	scanf("%i",&n);
	
	printf("Size of 2nd array:");
	scanf("%i",&m);
	
	printf("Enter 1st array\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("Enter 2nd array\n");
	for(i=0;i<m;i++)
		scanf("%i",&b[i]);
		
	for(i=0;i<m;i++)
		a[n+i]=b[i]	;
		
	printf("The result array\n");
	for(i=0;i<n+m;i++)
		printf("%5i",a[i]);
	
	return 0;
}

