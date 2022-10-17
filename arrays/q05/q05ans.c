#include<stdio.h>
void main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element number %d of the array: \n", i+1);
		scanf("%d",&arr[i]);
	}
	printf("The elements of the array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg= (float)sum/2;

	printf("\nThe sum of the array is %d\n",sum);
	printf("The average of the array is %.2f\n",avg);
}
