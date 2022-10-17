/* Q.04, Write a program to print the same file on the console */

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp = fopen("q04ans.c","r");
	if(fp==NULL)
	{
		perror("Error in opening file");
		return -1;
	}
	do
	{
		c = fgetc(fp);
		if(c==EOF)
			break;
		fputc(c,stdout);
	}
	while(1);
	fclose(fp);
	return 0;
}
