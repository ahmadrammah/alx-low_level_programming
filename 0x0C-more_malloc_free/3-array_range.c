#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, x;

	if (min > max)
		return (NULL);
	x = max - min + 1;

	pointer = malloc(sizeof(int) * x);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pointer[i] = min++;

	return (pointer);
}
