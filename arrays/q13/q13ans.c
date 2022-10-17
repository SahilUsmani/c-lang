#include<stdio.h>
void main()
{
	int a[5]={1,2,2,3,2};
	int z;
	printf("The given array is: ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	int count=0;
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{ 
			if(a[i]==a[j])
			{	count++;
				z=a[j];
			}
		}
	}
	printf("The repeated number is %d\n The frequency is %d\n",z,count);

}

