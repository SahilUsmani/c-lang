#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int org[n],copy[n],revcopy[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number %d element of the array ",i+1);
		scanf("%d",&org[i]);
	}
	printf("The copied array in same order is as follows:\n");
	for(i=0;i<n;i++)
	{
		copy[i]=org[i];
		printf("%d ",copy[i]);
	}
	printf("\nThe copied array in reverse order is as follows:\n");
	for(i=0,j=n-1;i<n;i++,j--)
	{
		revcopy[j]=org[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",revcopy[i]);
	}

}
