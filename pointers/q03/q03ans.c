#include<stdio.h>
void main()
{
	char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
	printf("The meaning of color is %p\n", color);
	printf("The meaning of (color+2) is %p\n", (color+2));
	printf("The meaning of *color is %s\n", *color);
	printf("The meaning of *(color+2) is %s\n", *(color+2));
	printf("The meaning of color[5] is %s and *(color+5) is %s\n", color[5], *(color+5));
}
