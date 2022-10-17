#include<stdio.h>
int fact(int);
void main()
{
	float a1,a2,a3,a4,a5,a6,a7,sum;
	a1 = (float)1/fact(1);
	a2 = (float)2/fact(2);
	a3 = (float)3/fact(3);
	a4 = (float)4/fact(4);
	a5 = (float)5/fact(5);
	a6 = (float)6/fact(6);
	a7 = (float)7/fact(7);

	sum = a1+a2+a3+a4+a5+a6+a7;
	printf("The result is: %f\n", sum);

}

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
