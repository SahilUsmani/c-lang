#include<stdio.h>
#include<string.h>
void in_dex(char *, char *);
void main()
{
	char s1[50], s2[50];
	printf("Enter the string: ");
	scanf("%s", s1);
	printf("Enter the second string: ");
	scanf("%s", s2);
	in_dex(s1, s2);
	return;
}

void in_dex(char *ss1, char *ss2)
{
	for(int i=0; i<strlen(ss1);i++)
	{
		for(int j=0; j<strlen(ss2);j++)
		{
			if(ss1[i]==ss2[j])
			{
				printf("The Index is: %d", i);
			}
		}
	}
}
