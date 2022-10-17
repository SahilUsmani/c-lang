/* Write a C Program that will illustrate the equivalence between
 *   Shifting a binary number to the left n bits and multiplying the binary number by 2 to the power of n
 *:   Shifting a binary number to the right n bits and dividing the binary number by 2 to the power of n
*/

#include<stdio.h>
int left_mul(int, int);
int right_div(int, int);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int p;
	printf("Enter the number of bits yo shift: ");
	scanf("%d", &p);

	printf("The result of shifting left and multiplying is %d\n", left_mul(n, p));
	printf("The result of shifting right and dividing is %d\n", right_div(n, p));

}

int left_mul(int n, int p)
{
	int lshift, mul,pow;
	lshift = n<<p;
	
	while(n!=0)
	{
		pow*=2;
		--n;
	}

	mul = lshift*pow;
	return mul;
}

int right_div(int n, int p)
{
	int rshift, pow;
	rshift = n>>p;
	
	while(n!=0)
	{
		pow*=2;
		--n;
	}

	float div = (float)rshift/pow;
	return div;
}
