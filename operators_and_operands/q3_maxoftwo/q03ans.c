#include<stdio.h>
void main()
{
	int a,b,maximum;
	printf("Enter the values of a: ");
	scanf("%d",&a);
	printf("Enter the values of b: ");
	scanf("%d",&b);
	maximum = (a>b)?a:b;
	printf("The greatest number = %d\n",maximum);
}
