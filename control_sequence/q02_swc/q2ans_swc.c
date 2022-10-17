#include<stdio.h>
void main()
{	char s;
	printf("Enter the character: ");
	scanf("%c",&s);
	
	switch(s)
	{
	 	case 'A':
			printf("A for Apple\n");
			break;
		case 'a':
			printf("A for Apple\n");
			break;
		case 'B':
			printf("B for Bat\n");
			break;
		case 'b':
			printf("B for Bat\n");
			break;
		case 'D':
			printf("D for Dog\n");
			break;
		case 'd':
			printf("D for Dog\n");
			break;
		case 'F':
			printf("F for Fan\n");
			break;
		case 'f':
			printf("F for Fan\n");
			break;
		default:
			printf("character is not in the range\n");
}
}
