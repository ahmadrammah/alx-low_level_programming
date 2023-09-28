#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}
