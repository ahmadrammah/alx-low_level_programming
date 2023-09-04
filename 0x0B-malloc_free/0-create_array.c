#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size);
	if (s == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
