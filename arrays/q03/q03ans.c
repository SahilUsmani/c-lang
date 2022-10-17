#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];//if we declare this array above with i and n then this will give segmentation fault because the n value will not be defined

	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d the elements of the array: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("The elements of the array are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
