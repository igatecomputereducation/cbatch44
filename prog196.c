#include<stdio.h>
#include<math.h>
int main()
{
	int a[50][50],n,m,i,j,sum;
	float mean,norm;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+a[i][j];
	}
	mean=(float)sum/(n*m);
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+a[i][j]*a[i][j];
	}
	norm=sqrt(sum);
	
	printf("Mean %f\n",mean);
	printf("Norm %f",norm);
	return 0;
}

