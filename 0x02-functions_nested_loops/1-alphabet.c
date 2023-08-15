#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase followed by a new line
 */

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar ('a' + i);
		i++;
	}

	_putchar('\n');
}

