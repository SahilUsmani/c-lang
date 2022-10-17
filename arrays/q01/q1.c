#include<stdio.h>
int main()
{
	char a[]={'s','a','h','i','l'};
	int length = sizeof(a)/sizeof(char);
	for(int i=0;i<length;i++)
	printf("%c",a[i]);
	printf("\n");
	printf("Size of name = %dbytes",(int)sizeof(a));
	printf("\n");
	printf("Length of array = %d",length);
}
