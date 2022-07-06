#include <stdio.h>
#include <string.h>
/**
 * _islower function
 * checks for lowercase character
 * returns 1 if character is lowercase, 0 if otherwise
 */
int _islowercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

