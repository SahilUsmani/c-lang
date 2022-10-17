#include<stdio.h>
void main()
{
	int i,n,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int a=0;a<n;a++)
	{
		printf("Enter the number %d element of the array: ",i+1);
		scanf("%d",&arr[a]);
	}
	printf("\nThe array is:\n");
	for(int a=0;a<n;a++)
	{
		printf("%d ",arr[a]);
	}

	printf("\nSpecify the index number where you want to enter your element: ");
	scanf("%d",&i);

	printf("\nEnter the element: ");
	scanf("%d",&j);

	n++;

	for(int a=n-1;a>=i;a--)
	{
		arr[a+1]=arr[a];
	}
	arr[i]=j;
	for(int a=0;a<n;a++)
	{
		printf("%d ",arr[a]);
	}
	printf("\n");
}
