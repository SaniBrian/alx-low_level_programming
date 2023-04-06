#include "main.h"

/**
 *_pow_recursion - Returns the value of an integer
 *to the power of another integer
 *@x: integer
 *@y: integer
 *Return: -1 if y is lower than 0
 *otherwise value of computation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
