#include<stdio.h>
int factorial(int);
int permutation(int, int);
int combination(int, int);
void main()
{
	int n, r;
	printf("Please note n > r > 0\n");
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the value of r: ");
	scanf("%d", &r);
	
	printf("The permutation of the number is : %d\n", permutation(n, r));
	printf("The combination of the number is : %d\n", combination(n, r));
}

int factorial(int f)
{	int fact = 1;
	if(f!=0){
		for(int i=1;i<=f;i++)
		{	
			fact = fact*i;
		}
		return fact;
	}
	else
		return 1;
}

int permutation(int nv, int rv)
{
	int perma;

	perma = factorial(nv)/factorial(nv-rv);

	return perma;
}

int combination(int nc, int rc)
{
	int comb, prod;
	prod = factorial(nc-rc)*factorial(rc);
	comb = factorial(nc)/prod;
	return comb;
}
