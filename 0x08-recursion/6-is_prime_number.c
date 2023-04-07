#include "main.h"

/**
 * _is_prime - checks if input is a prime number
 * @n: input number
 * @i: iterator
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number
 */
int _is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 1));

}
/**
 * is_prime_number - checks if input is a prime number
 * @n: input number
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_is_prime(n, 2));
}
