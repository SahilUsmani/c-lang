#include<stdio.h>
void main()
{
	int x[8]={10,20,30,40,50,60,70,80};

	printf("The value of x is %p\n",x);	//we are using %p format specifier because x has the base address of array
	printf("The value of x+2 is %p\n",(x+2));
	printf("The value of *x is %d\n",*x);
	printf("The value of (*x+2) is %d\n",(*x+2));
	printf("The value of *(x+2) is %d\n",*(x+2));

	/*  this is a test program
	
	int a;
	printf("The value of a is %d",10);
	*/
}
