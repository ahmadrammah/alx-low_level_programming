#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 26)
		{
			_putchar ('a' + i);
			i++;
		}
		j++;
		i = 0;
		_putchar ('\n');
	}
}
