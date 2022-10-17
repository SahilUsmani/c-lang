#include<stdio.h>
#include<string.h>
int count;
void main()
{
	char *a;
	char *s[]={
		"We will teach you how to",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million"
	};

	int size = (sizeof(s)/sizeof(char*));
	int j=0;
	while(j<(size-1))
	{
		a = s[j];
		for(int i=0; a[i]!= '\0'; i++)
		{
			if(a[i]=='e')
				count++;
		}
		j++;
	}
	printf("The Number of e's are: %d\n", count);
	return;	
}
