#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i = '0';
	int alph = 'a';

	while ('i' <= 9)
	{
		putchar(i);
		i++;
	}
	while (alph < 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
