/* Q.10, Generate the pyramind of nmbers using nested loops */

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of the rows: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++)
			printf(" ");
		for(int j=i; j>0; --j)
			printf("%d", j);
		for(int j=2; j<=i; ++j)
			printf("%d", j);
		printf("\n");
	}
	return;
}
