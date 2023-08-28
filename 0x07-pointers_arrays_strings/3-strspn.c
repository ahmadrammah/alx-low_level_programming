#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s && strchr(accept, *s++))
	{
		i++;
	}

    return i;
}
