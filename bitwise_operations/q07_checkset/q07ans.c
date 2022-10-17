#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int p;
	printf("Enter the position to check: ");
	scanf("%d", &p);

	if((1<<p)&n)
		printf("The bit is set\n");
	else
		printf("The bit is not set\n");
	return;
}
