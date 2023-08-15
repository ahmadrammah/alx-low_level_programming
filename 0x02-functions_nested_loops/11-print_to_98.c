#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i, j;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= -100)
			{
				_putchar('-');
				_putchar(((-i) / 100) + '0');
				_putchar((((-i) / 10) % 10) + '0');
				_putchar(((-i) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i <= -10)
			{
				_putchar('-');
				_putchar(((-i) / 10) + '0');
				_putchar(((-i) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i < 0)
			{
				_putchar('-');
				_putchar(((-i) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 0)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i != 98) && (i > 0))
			{
				_putchar ((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar ('9');
				_putchar ('8');
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j >= 100)
			{
				_putchar ((j / 100) + '0');
				_putchar(((j / 10) % 10) + '0');
				_putchar((j % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 99)
			{
				_putchar ('9');
				_putchar ('9');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 98)
			{
				_putchar ('9');
				_putchar ('8');
			}
		}
	}
	_putchar ('\n');
}
