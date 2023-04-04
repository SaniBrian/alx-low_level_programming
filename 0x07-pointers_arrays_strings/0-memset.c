#include "main.h"

/**
 *_memset - fills memory wih a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 *Return: pointer to the memor area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(s + j) =  b;

	return (s);
}
