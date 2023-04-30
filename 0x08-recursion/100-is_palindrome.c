#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen(s));
}

/**
 * compare - compares each character of the string
 * @i: smallest iterator
 * @j: biggest iterator
 * Return: 1 if palindrome, 0 if not
 */
int compare(char *i, char *j)
{

	if (i >= j)
		return (1);
	if (*i == *j)
		return (compare(i + 1, j - 1));

	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome
 * 0 if s is not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, (s + _strlen(s) - 1)));
}
