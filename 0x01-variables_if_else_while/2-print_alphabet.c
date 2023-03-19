#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar("\n");
		}
=======

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

>>>>>>> 17db43e35b01ab65de5934af0999336ef6989d09
	return (0);
}
