#include<stdio.h>
void swapping(int *, int *);
void main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("After swapping");
	swapping(&a, &b);
}

void swapping(int *ptra, int *ptrb)
{
	int temp=0;

	temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;

	printf("\nThe value of a is now: %d", *ptra);
	printf("\nThe value of b is now: %d\n", *ptrb);
}
