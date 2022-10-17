#include<stdio.h>
int rotoate_right(int, int);
void main()
{
	int n, b;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the position you want the integer to be rotated by: ");
	scanf("%d", &b);
	printf("The value of the %d after rotating it towards right by %d position is: %d\n", n, b, rotoate_right(n, b));

}

int rotoate_right(int n, int b)
{
	int rotated;
	rotated = n>>b; // using bitwise right shift operator 
	return rotated;
}
