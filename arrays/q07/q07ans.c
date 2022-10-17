#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int org[i],copy[i],revcopy[i];
	for(i=0;i<n;i++)
	{
	//	printf("Enter the number %d element of the array ",i+1);
		scanf("%d",&org[i]);
	}
	printf("The copied array in same order is as follows:\n");
	for(i=0;i<n;i++)
	{
		copy[i]=org[i];
		printf("%d ",copy[i]);
	}
	printf("\nThe copied array in reverse order is as follows:\n");
/*	j=0;
	for(i=n-1;i>=0;i--)
	{
		revcopy[i]=org[j++];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",revcopy[i]);
	}

*/	int len=sizeof(copy);
	for(int i=0;i<n;i++)
	{
		revcopy[i]=copy[len-i-1];
		printf("%d ",revcopy[i]);
		
	}
	printf("\n");

}
