#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * that contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplicate_str = (char *)malloc(sizeof(char) * (i + 1));

	if (duplicate_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		duplicate_str[j] = str[j];

	return (duplicate_str);
}
