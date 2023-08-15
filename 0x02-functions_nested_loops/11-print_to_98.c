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
			if (i != 98)
			{
				putchar ((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(',');
				putchar(' ');
			}
			else if (i == 98)
			{
				putchar ('9');
				putchar ('8');
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j >= 100)
			{
				putchar ((j / 100) + '0');
				putchar(((j / 10) % 10) + '0');
				putchar((j % 10) + '0');
				putchar(',');
				putchar(' ');
			}
			else if (j == 99)
			{
				putchar ('9');
				putchar ('9');
				putchar(',');
				putchar(' ');
			}
			else if (j == 98)
			{
				putchar ('9');
				putchar ('8');
			}
		}
	}
}
