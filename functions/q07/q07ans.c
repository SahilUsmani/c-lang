#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void to_lower(char *);
void main()
{
	char s[50];
	printf("Enter the uppercase string:\n");
	scanf("%s",s);
	printf("The string you have entered is: %s\n",s);
	to_lower(s);
}

void to_lower(char *s)
{
	for(int i=0; i<=strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]+=32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		}
	}
	printf("The string after conversion is: %s\n",s);
	return;
}
