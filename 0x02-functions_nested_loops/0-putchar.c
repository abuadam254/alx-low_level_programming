#include <stdio.h>
#include <string.h>
/**
 * putchar() function demo
 * End of comment
 */
int main(void)
{
	char str[]="_putchar";
	int i;

	for(i=0;i<(strlen(str));i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return(0);
}

