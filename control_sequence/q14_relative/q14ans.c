/* Q.14, Write a program to generate two Relatively Prime Numbers */

#include<stdio.h>
int gcd(int, int);
void main()
{
	int n1, n2;
	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);

	if(gcd(n1,n2)==1)
		printf("The %d and %d are relatively prime or coprime\n", n1, n2);
	else
		printf("The %d and %d are not relatively prime or coprime numbers\n", n1, n2);
	return;
}

int gcd(int x, int y)
{
	if(y!=0)
		return gcd(y, x % y);
	else
		return x;
}
