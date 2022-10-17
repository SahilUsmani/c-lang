/* Write a program to compute factorial and GCD using recursion */

#include<stdio.h>
int fact(int);
int gcd(int, int);
void main()
{
	int n1,n2;
	printf("Enter the first number: ");
	scanf("%d",&n1);
	printf("Enter the second number: ");
	scanf("%d",&n2);
	printf("The factorial of %d is: %d\n", n1, fact(n1));
	printf("The factorial of %d is: %d\n", n2, fact(n2));
	printf("The GCD of %d and %d is %d\n", n1, n2, gcd(n1,n2));
	return;
}

int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}

int gcd(int x, int y)
{
	if(y!=0)
		return gcd(y, x % y);
	else
		return x;
}
