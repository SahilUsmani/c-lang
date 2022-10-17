#include<stdio.h>
void main()
{
	int N,i,sum=0;
	printf("This program will add the \"N\" number of values except 5\n");
	printf("Enter the value of N: ");
	scanf("%d", &N);
	for(i=1;i<=N;i++)
	{

	if(i%5==0)
	{
		continue;
	}
	sum=sum+i;
	}
		printf("The sum is: %d\n", sum);
}
