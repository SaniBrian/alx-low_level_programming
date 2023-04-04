#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check;

	i = 0;
	check = 0;
	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (check);
		}
		i++;
	}

	return (check);
}
