#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * return: 1 if c is a letter, lowercase or uppercase
 * Return: o otherwise
 *@c: The character is in ASCII code
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
