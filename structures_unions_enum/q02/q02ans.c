/* Define structure with two members (one int and other char). Also define s union with two members (one int and other char).
 * Print the sizes of structure and union in number of bytes.*/

#include<stdio.h>

struct sizetest{
	int num;
	char name;
};

union sizetest_u{
	int unum;
	char uname;
};
void main()
{
	struct sizetest z;
	union sizetest_u s;
	printf("The size of structure is %ld bytes.\n", sizeof(z));
	printf("The size of union is %ld bytes.\n", sizeof(s));
	return;
}
