#include<stdio.h>
void main()
{
	int i,n,j;
	printf("Enter the elements of the array\n");
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number %d element of the array: \n", i+1);
		scanf("%d",&a[i]);
	}
	int b[n];
	for(i=0,j=n-1;i<n;i++,j--)
	{
		b[j]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
