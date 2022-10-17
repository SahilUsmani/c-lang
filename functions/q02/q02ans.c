#include<stdio.h>
int factorial(int);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("The factorial of the number is %d\n", factorial(n));
}

int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
