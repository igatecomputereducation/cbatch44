#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%i",&age);
	
	if(age>=60)
		printf("Senior adult");
	else if(age>=19)
		printf("Adult");
	else if(age>=13)
		printf("Adolesence");
	else
		printf("Child");
	
	return 0;
}

