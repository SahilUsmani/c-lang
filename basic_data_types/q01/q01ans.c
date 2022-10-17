#include<stdio.h>
void main()
{
	int i,p,t,r;
	printf("Enter the Principal Amount: ");
	scanf("%d", &p);
	printf("Enter the Rate of Interest: ");
	scanf("%d", &r);
	printf("Enter the Time in years: ");
	scanf("%d", &t);
	
	i=p*t*r/100;
	printf("The Simple Interest is %d\n", i);
	return;
}

