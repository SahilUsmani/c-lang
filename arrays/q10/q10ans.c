#include<stdio.h>
void main()
{
	int n,j=0,q=0;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the %d number of the elements: ",n);
	for(int a=0;a<n;a++)
	{
		scanf("%d ",&arr[a]);
	}

	for(int a=0;a<n;a++)
	{
		if(arr[a]%2==0)
		{
			j++;
		}
		else
		{
			q++;
		}
			
	}
	printf("%d %d\n",j,q);
	int even[j], odd[q],m=0,k=0;

	for(int a=0;a<n;a++)
	{
		if(arr[a]%2==0)
		{
			even[m++]=arr[a];
		}
		else
		{
			odd[k++]=arr[a];
		}
	}
	printf("The even integers of the array are:\n");
	for(int a=0;a<j;a++)
	{
		printf("%d ",even[a]);
	}
	printf("\nThe odd integers of the array are:\n");
	for(int a=0;a<q;a++)
	{
		printf("%d ",odd[a]);
	}
	printf("\n");
}
