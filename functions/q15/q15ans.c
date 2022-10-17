#include<stdio.h>
int multiply();
float division();
int factorial(int);
int square();
void result(int, int);
void main()
{	int n,f;
	printf("Enter 1 for multiplication\nEnter 2 for divison\nEnter 3 for factorial\nEnter 4 for square\n");
	scanf("%d", &n);
	if(n==3)
	{
		printf("Enter the number you want factorial of\n");
		scanf("%d",&f);
		result(n, f);
	}
	else
		result(n, f);
}

int multiply()
{
	int a, b;
	printf("Enter the two numbers you want to multiply\n");
	scanf("%d %d", &a, &b);
	int mul;
	mul = a*b;
	return mul;
}

float division()
{
	int a, b;
	printf("Enter the two numbers you want to divide\n");
	scanf("%d %d", &a, &b);
	float div;
	div = (float)a/b;
	return div;
}

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}

int square()
{
	int n;
	printf("Enter the number you want the square of\n");
	scanf("%d", &n);
	n*=n;
	return n;
}

void result(int n, int f)
{
	switch(n)
	{
		case 1:	
			printf("The result is %d\n", multiply());
			break;
		case 2:					
			printf("The result is %.3f\n", division());
			break;
		case 3:		
			printf("The result is %d\n", factorial(f));
			break;
		case 4:	
			printf("The result is %d\n", square());
			break;
		default:
			while(!(n==1||n==2||n==3|n==4))
			{
			printf("You have entered an Invalid Input\nEnter 1 for multiplication\nEnter 2 for divison\nEnter 3 for factorial\nEnter 4 for square\n");
			scanf("%d", &n);}				
	}
	

}
