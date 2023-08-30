#include "main.h"

/**
 * sqrt_real_recursion - a function that calculates the square root.
 * @n: number to calculate the sqaure root of
 * @x: iterator
 * Return: the resulting square root
 */

int sqrt_real_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	else
		return (sqrt_real_recursion(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_real_recursion(n, 0));
}
