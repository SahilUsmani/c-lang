/* Q.05, Write a function "replace" which takes a pointer to a string as a parameter, which replaces all spaces in that string
 * by minus signs, and delivers the number of spaces it replaced */
#include<stdio.h>
#include<string.h>
int replace(char *);
void main()
{
	char org[] = "The Cat Sat";
	char *fstat;
	fstat = org;
	puts(fstat);
	printf("\n");
	int n = replace(fstat);
	printf("The number of spaces are: %d\n", n);
	return;
}

int replace(char *stat)
{
	int m=0;
	int length = strlen(stat);
	printf("The lenght is %d\n", length);
	for(int i=0; i<1; i++)
	{
		if(stat[i]==' ')
		{
			stat[i]='-';
			m++;
		}
	}
	puts(stat);
	printf("\n");
	return m;
}
