#include <stdio.h>
#include <string.h>

/**
 * A function to print alphabets in lowercase
 * End of Comment
 */

void print_alphabet(void)
{
    char ch;

    for(ch='a';ch<='z';ch++)
    {
        putchar(ch);
    }
   putchar('\n');
}

/**Main function
 * Starts here
 */
int main(void)
{
	print_alphabet();
	return(0);
}

