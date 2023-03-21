#include "main.h"

/**
 * main - checks for alphabetic character
 * returns 1 if c is a letter, lowercase or uppercase
 * Returns o otherwise
 * The character is in ASCII code
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
