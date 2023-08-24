#include "main.h"

/**
 * print_number - print integers
 * @n: integer to be entered
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}

	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
