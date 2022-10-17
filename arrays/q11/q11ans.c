#include<stdio.h>
void main()
{
	int n1,n2,n3,i;
	printf("Enter the size of first array: ");
	scanf("%d",&n1);

	int arr[n1];
	printf("Enter the elements of first array:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the size of second array: ");
	scanf("%d",&n2);

	int brr[n2];
	printf("\nEnter the elements of second array:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&brr[i]);
	}
	n3=n1+n2;
	int crr[n3];

	for(i=0;i<n1;i++)
	{
		crr[i]=arr[i];
	}
	for(i=0;i<n2;i++)
	{
		crr[n1++]=brr[i];
	}
	printf("The concatenate array is:\n");
	for(i=0;i<n3;i++)
	{
		printf("%d ",crr[i]);
	}
	printf("\n");
}
