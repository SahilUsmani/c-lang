#include<stdio.h>
void main()
{
	int i;
	printf("The ASCII Values of A-Z, a-z and 0-9 are:\n");
	for(i=65;i<91;i++)
	{
		printf("%c %d\n",i,i);
	}
	printf("\n");
	for(i=97;i<123;i++)
	{
		printf("%c %d\n",i,i);
	}
	printf("\n");
	for(i=48;i<58;i++)
	{
		printf("%c %d\n",i,i);
	}
	printf("\n");

}
