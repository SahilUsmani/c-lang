#include<stdio.h>
void endian(char *, int);
void main()
{
	int num=0x12345678;
	endian((char *)&num, sizeof(num));
}
void endian(char* num, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%.2x ",num[i]);
	}
	printf("\n");
}
