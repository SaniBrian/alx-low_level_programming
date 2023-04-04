#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			n = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[n] == needle[j])
					n++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0');
}
