#include<stdio.h>
void main()
{	int a, n, s=0,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		a=n%10;
		s+=(a*a*a);
		n=n/10;
	}
	if(temp==s)
		printf("This is an armstrong number\n");
	else
		printf("This is not an armstrong number\n");
}
