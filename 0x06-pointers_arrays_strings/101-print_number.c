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
		putchar('-');
	}

	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	putchar((x % 10) + '0');
}
