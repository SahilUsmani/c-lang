#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int p;
	printf("Enter the position to set: ");
	scanf("%d", &p);

	int set;
	set = ((1<<p)|n);
	printf("The result after setting is %d\n", set);
	return;
}
