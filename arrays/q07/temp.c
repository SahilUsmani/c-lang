#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int org[i],revcopy[i];
	//int len=0;
	int len=sizeof(org);

	for(i=0;i<n;i++)
	{
		scanf("%d",&org[i]);
		len++;
	}

	printf("%d\n",len);
	for(int i=0;i<n;i++)
	{
		revcopy[i]=org[len-i-1];
		printf("%d ",revcopy[i]);
		
	}
	printf("\n");

}
