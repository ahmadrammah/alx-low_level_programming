#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x = x + _strlen_recursion(s + 1);
	}

	return (x);
}
