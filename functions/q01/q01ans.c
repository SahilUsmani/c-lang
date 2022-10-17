#include<stdio.h>
int permutation(int, int);
void main()
{
	int n,r;
	int res;
	printf("Enter the inputs for 'n > r > 0'\n");
	printf("Enter total number of elements 'n': ");
	scanf("%d",&n);
	printf("Enter the number to be arranged 'r': ");
	scanf("%d",&r);
	if(n>r)
	{
		res=permutation(n,r);
		printf("The result is %d",res);
	}
	else
	{
		printf("Invalid inputs");
	}
	printf("\n");
}
int permutation(int n, int r)
{
	int num=1,den=1;
	int q;
	int p;
	for(int i=1;i<=n;i++)
	{
		num=num*i;
	}
	q=n-r;
	for(int i=1;i<=q;i++)
	{
		den=den*i;
	}
	p=num/den;
	return p;
}
