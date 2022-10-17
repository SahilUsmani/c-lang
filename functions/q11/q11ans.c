#include<stdio.h>
void index(int[], int, int);
void main()
{
	int i, n, t;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int s[n];
	printf("Enter the number of elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &s[i]);
	}
	printf("The number is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d", s[i]);
	}
	printf("\nEnter the number whose rightmost occurence you want to find:");
	scanf("%d",&t);
	index(s, n, t);

}

void index(int s[], int n, int t)
{
	int i, j=1;
	for(i=n-1,j=1;i>=0;--i)
	{
		if(s[i]==t)
		{
			printf("\n%d rightmost occurence is %d\n", t, j);
			break;
		}
		j++;
	}
}
