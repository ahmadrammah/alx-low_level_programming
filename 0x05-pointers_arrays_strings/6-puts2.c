#include "main.h"
/**
 * puts2 - function should print every other character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	x = length - 1;
	for (i = 0 ; i <= x ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
