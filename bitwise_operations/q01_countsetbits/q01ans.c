/* Write a program to count the number of bits as "1" in an 8 bit number */

#include<stdio.h>
int integer(void);
int bin(void);
void main()
{
	int n;
//	enum{i=1, b=2};
	printf("If you want to enter an integer number press 1\n");
	printf("If you want to enter a binary number press 2\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
			printf("\nThe number of set bits are: %d\n", integer());
			break;
		case 2:
			printf("The number of set bits are: %d\n", bin());
			break;
		default:
			printf("You have entered an invalid input");
			break;
		
	}

}

int integer(void)
{
	int n, count=0, setcount=0, i;
	printf("Enter the integer number: ");
	scanf("%d", &n);
	int a[32];
	for(i=0; n>0; i++)
	{
		a[i]=n%2;
		n=n/2;
		count++;
	}
	/*printf("The binary number for given integer is: ");
	for(i=count-1; i>=0; i--){
		printf("%d ", a[i]);
	}*/
	for(i=0; i<count; i++)
	{
		if(a[i]&&1)
			setcount++;
	}
	return setcount;
}

int bin(void)
{	
	int i=0, setcount=0, size;
	printf("Enter the size of your binary number: ");
	scanf("%d", &size);
	printf("Enter the binary number: ");
	int arrbin[size];
	for(i=0; i<size; i++)
	{
		scanf("%d", &arrbin[i]);
	}
	
	for(i=0; i<size; i++)
	{
		if(arrbin[i]&&1)
			setcount++;
	}
	return setcount;
}

