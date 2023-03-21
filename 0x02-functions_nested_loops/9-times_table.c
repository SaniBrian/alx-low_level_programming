#include "main.h"

/**
 * times_table - Prints the 9 times table
 *starting with 0
 * Return: no return
 */
void times_table(void)
{
	int i;
	int j;
	int mult_result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			mult_result = i * j;
			_putchar(44);
			_putchar(32);
			if (mult_result <= 9)
			{
				_putchar(32);
				_putchar(mult_result + 48);
			}
			else
			{
				_putchar((mult_result / 10) + 48);
				_putchar((mult_result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
