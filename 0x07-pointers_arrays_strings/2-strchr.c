#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	j = 0;
	while (*(s + j) != '\0')
	{
		if (*(s + j) == c)
			return (s + j);
		j++;
	}
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
