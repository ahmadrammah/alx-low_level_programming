#include "main.h"

/**
 * divby - a function that calculates if a number is prime.
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */

int divby(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && n % i == 0)
		return (0);
	return (divby(n, i - 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divby(n, n - 1));
}
