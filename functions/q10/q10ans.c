#include<stdio.h>
void itob(int, int[]);
void itoh(int, int[]);
void main()
{
	int n, s[10];
	printf("Enter the number: ");
	scanf("%d", &n);
	itob(n,s);
	itoh(n,s);

}

void itob(int n, int arr[])
{
	int i;
	for(i=0;n>0;i++)
	{
		arr[i]=n%2;
		n=n/2;
	}
	printf("The binary of the given number is:\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return;
}

void itoh(int n, int arr[])
{
	int i;
	for(i=0;n>0;i++)
	{
		arr[i]=n%16;
		n=n/16;
	}
	printf("The binary of the given number is:\n");
	for(i=i-1;i>=0;i--)
	{
		switch (arr[i])
		{
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("c");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
			default:
				printf("%d", arr[i]);
		}
	}
	printf("\n");
	return;
}
