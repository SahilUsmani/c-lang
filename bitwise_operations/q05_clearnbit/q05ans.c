#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int p;
	printf("Enter the position of the bit to clear: ");
	scanf("%d", &p);

	int clear;
	clear = (~(1<<p)&n);
	printf("The result after clearing is %d\n", clear); 
}
