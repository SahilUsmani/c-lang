#include<stdio.h>
void main()
{	int n,rem,pal=0,temp;
	printf("Enter the number: ");
	scanf("%d", &n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		pal=(pal*10)+rem;
		n=n/10;
	}
	if(pal==temp)
	{
		printf("This is a palindrome\n");
	}
	else
	{
		printf("This is not a palindrome\n");
	}
}
