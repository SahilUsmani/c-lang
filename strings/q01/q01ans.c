/* Q. 01, Write a program to convert lower case string to upper case string and vice versa */

#include<stdio.h>
void main()
{
	int i;
	char str[100];
	printf("Enter the string: ");
	scanf("%s", str);
	for(int i=0; str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		}
		else{
			str[i]=str[i]+32;
		}
	}
	printf("Now the string is: %s\n",str);
	return;
}
