/* Q.01, Develop a C program to perform operations on two wholw numbers, identify suitable data types to represent the numbers
 * and resultant values */

#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,mod;
	float div;
	printf("enter two number: ");
	scanf("%d %d", &a, &b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div= (float)a/b;
	mod=a%b;
	printf("the addition of %d and %d is: %d \n", a, b, sum);
	printf("the subtraction of %d and %d is: %d \n", a, b, sub);
	printf("the multiplication of %d and %d is: %d \n", a, b, mul);
	printf("the division of %d and %d is: %.3f \n", a, b, div);
	printf("the modulus of %d and %d is: %d \n",a ,b, mod);
	return;
}
