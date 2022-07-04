#include <stdio.h>

/**
 *Size of various data types
 *End of comment
 */

int main(void)
{
	int i;
	char c;
	float f;
	double d;

	printf("Size of int:%lu\nSize of char:%lu\nSize of float:%lu\nSize of double:%lu\n",(unsigned long)sizeof(i),(unsigned long)sizeof(c),(unsigned long)sizeof(f),(unsigned long)sizeof(d));

	return(0);
}

