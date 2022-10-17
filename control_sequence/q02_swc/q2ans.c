#include<stdio.h>
void main()
{	char s;
	printf("Enter the character: ");
	scanf("%c",&s);

		if (s=='A'||s=='a')
			printf("A for Apple\n");

		else if (s=='B'||s=='b')
			printf("B for Bat\n");
		
		else if (s=='D'||s=='d')
			printf("D for Dog\n");
		
		else if (s=='F'||s=='f')
			printf("F for Fan\n");
		else
			printf("character is not in the range\n");
}
