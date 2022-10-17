#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n!=0)
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("The factorial of the number is %d\n",fact);

	}
	else
	{
		printf("The factorial of the number is %d\n",1);
	}
}
