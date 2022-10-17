/* Write a program to reverse a string using recursive function */
#include<stdio.h>
#include<string.h>
char string_rev(char [], int, int);
void main()
{
	char arr[40];
	int size;
	printf("Enter the string: ");
	gets(arr);
	puts(arr);
	size = strlen(arr);
	printf("Size of the strings is: %d\n", size);
	string_rev(arr, 0, size-1);
	printf("The reverse of the string is: ");
	puts(arr);
	return;
}

char string_rev(char a[40], int n, int size)
{
	char temp;
	temp = a[n];
	a[n] = a[size - n];
	a[size - n] = temp;
	if(n==size/2)
		return a;
	else
		return string_rev(a,++n,size);

}
