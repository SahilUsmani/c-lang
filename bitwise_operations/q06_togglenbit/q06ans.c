#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int p;
	printf("Enter the position to toggle: ");
	scanf("%d", &p);

	int toggle;
	toggle = ((1<<p)^n);
	printf("The result is %d\n", toggle);
	return;
}
