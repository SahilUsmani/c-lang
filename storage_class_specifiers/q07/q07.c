#include<stdio.h>
//static int a;
//static int a = 10;
static int a = 10;
void main()
{
	//static int b;
	//static int b = 20;
	static int a = 20;
	printf("The value of a is: %d\n", a);
	printf("The value of a is: %d\n", a);
	return;
}

/* The program ran successfully when the variables were declared and wasn't initialized
 * The program ran successfully even with the varaible where assigned the values */
