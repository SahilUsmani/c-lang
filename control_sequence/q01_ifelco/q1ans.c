#include<stdio.h>
void main()
{	int i,j;
	printf("Enter two numbers: ");
	scanf("%d %d",&i,&j);
	if(i==20||j==20)
	{
		printf("Atleast one variable is having 20\n");
	}
	else
	{
		printf("Both variables are not having 20\n");
	}
	if(i<=40&&j<=40)
	{
		printf("Both are less than or equal to 40\n");
	}
	else
	{
		printf("Both are not less than or equal to 40\n");
	}
}
