#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: input number
 * @i: iterator
 * Return: -1 if n does not have a natural square root
 *otherwise return the square root
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);

	if (square == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}
