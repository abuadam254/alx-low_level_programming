#include <stdio.h>
#include <string.h>
/**
 * a function that checks for an alphabetic character
 * returns 1 if character is a letter(uppercase or lowercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

