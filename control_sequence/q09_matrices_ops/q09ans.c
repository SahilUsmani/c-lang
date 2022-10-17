#include<stdio.h>
void add(int [], int [], int, int);
void main()
{
	int row_a1, col_a1,i,j;
	printf("Enter the number of rows for array 1: ");
	scanf("%d", &row_a1);
	printf("Enter the number of columns for array 1: ");
	scanf("%d", &col_a1);

	int a1[i][j];
	printf("Enter the elements of the array\n");
	for(i=0;i<row_a1;i++){
		for(j=0;j<col_a1;j++){
			scanf("%d", &a1[i][j]);
		}
	}
	printf("The 1st array is:\n");
	for(i=0;i<row_a1;i++){
		for(j=0;j<col_a1;j++){
			printf("%d ", a1[i][j]);
		}
	}

	int row_a2, col_a2;
	printf("Enter the number of rows for array 2: ");
	scanf("%d", &row_a2);
	printf("Enter the number of columns for array 2: ");
	scanf("%d", &col_a2);

	int a2[i][j];
	printf("Enter the elements of the array\n");
	for(i=0;i<row_a2;i++){
		for(j=0;j<col_a2;j++){
			scanf("%d", &a2[i][j]);
		}
	}
	printf("The 2nd array is:\n");
	for(i=0;i<row_a2;i++){
		for(j=0;j<col_a2;j++){
			printf("%d ", a2[i][j]);
		}
	}
	add(a1, a2, row_a2, col_a2);
}

void add(int a1[], int a2[],int r,int c)
{
	int i,j,res[i][j];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			res[i][j] = a1[i][j]+a2[i][j];
		}
	}
	printf("The sum of the matrices is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", res[i][j]);
		}
	}

}
